import os, re, subprocess, tempfile, sys
from pathlib import Path
from PIL import Image, ImageDraw, ImageFont
W = Path(sys.argv[1]); out = sys.argv[2]; fr = len(sys.argv) > 3 and sys.argv[3] == "fr"
R = Path(__file__).parent / "svgrender/build/svgrender"
env = dict(os.environ, QT_QPA_PLATFORM="offscreen")
qrc = (W / "ico/icon-themes.qrc").read_text()
alias = dict(re.findall(r'<file alias="([^"]+)">([^<]+)</file>', qrc))
ORIG = Path(__file__).parent.parent / "originals"
def new(theme, px, name):
    folder = {16: "16x16", 22: "22x22", 32: "32x32"}[px]
    a = f"themes/{theme}/{folder}/{name}.svg"
    return W / "ico" / alias[a]
def render(p, size):
    t = tempfile.mktemp(suffix=".png"); subprocess.run([str(R), str(size), t, str(p)], check=True, env=env)
    return Image.open(t).convert("RGBA")
names = ["ellipse-to-bezier", "rect-to-bezier", "rect-to-polyline"]
sizes = [16, 22, 32]
S = 3; cw = 36 * S; rh = 38 * S; lw = 200
font = ImageFont.truetype("/System/Library/Fonts/Helvetica.ttc", 15)
T = (["Avant, clair", "Avant, sombre", "Après, clair", "Après, sombre"] if fr else
     ["Before, light", "Before, dark", "After, light", "After, dark"])
groups = [(T[0], "old", (239, 240, 241)), (T[1], "old", (53, 53, 53)),
          (T[2], "qet", (239, 240, 241)), (T[3], "qet-dark", (53, 53, 53))]
gw = len(sizes) * cw
img = Image.new("RGBA", (lw + len(groups) * (gw + 20), 50 + len(names) * rh), (255, 255, 255, 255))
d = ImageDraw.Draw(img)
for k, (title, kind, bg) in enumerate(groups):
    x0 = lw + k * (gw + 20)
    d.rectangle([x0, 26, x0 + gw, img.height], fill=bg)
    d.text((x0 + 4, 4), title, fill=(0, 0, 0), font=font)
    for j, px in enumerate(sizes):
        d.text((x0 + j * cw + 8, 30), f"{px}", fill=(128, 128, 128), font=font)
        for i, n in enumerate(names):
            p = ORIG / f"{n}-arummler.svg" if kind == "old" else new(kind, px, n)
            r = render(p, px).resize((px * S, px * S), Image.NEAREST)
            img.alpha_composite(r, (x0 + j * cw + 4, 50 + i * rh + (rh - px * S) // 2))
for i, n in enumerate(names):
    d.text((8, 50 + i * rh + rh // 2 - 8), n, fill=(0, 0, 0), font=font)
img.save(out)
