/*
	Copyright 2006-2026 The QElectroTech Team
	This file is part of QElectroTech.
	
	QElectroTech is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.
	
	QElectroTech is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with QElectroTech.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "qeticons.h"
#include <QApplication>
#include <QIconEngine>
#include <QImage>
#include <QPainter>
#include <QPixmapCache>
#include <QStyle>
#include <QStyleOption>

// on redeclare ici les icones
namespace QET {
	namespace Icons {
		QIcon Add;
		QIcon AddFolio;
		QIcon Allowed;
		QIcon ApplicationExit;
		QIcon ArrowLeft;
		QIcon ArrowLeftDouble;
		QIcon ArrowRight;
		QIcon ArrowRightDouble;
		QIcon Autoconnect;
		QIcon BringForward;
		QIcon Cancel;
		QIcon Company;
		QIcon Conductor;
		QIcon ConductorEdit;
		QIcon ConductorSettings;
		QIcon Configure;
		QIcon ConfigureToolbars;
		QIcon IC_CopyFile;
		QIcon DefaultConductor;
		QIcon DiagramAdd;
		QIcon Diagram;
		QIcon DiagramBg;
		QIcon DiagramDelete;
		QIcon DialogCancel;
		QIcon DialogInformation;
		QIcon DialogOk;
		QIcon DocumentClose;
		QIcon DocumentExport;
		QIcon DocumentSpreadsheet;
		QIcon DocumentImport;
		QIcon DocumentNew;
		QIcon DocumentOpen;
		QIcon DocumentOpenRecent;
		QIcon DocumentPrint;
		QIcon DocumentPrintFrame;
		QIcon DocumentSave;
		QIcon DocumentSaveAll;
		QIcon DocumentSaveAs;
		QIcon East;
		QIcon EditClear;
		QIcon EditClearLocationBar;
		QIcon EditCopy;
		QIcon EditCut;
		QIcon EditDelete;
		QIcon EditPaste;
		QIcon EditRedo;
		QIcon EditRename;
		QIcon EditSelectAll;
		QIcon EditSelectInvert;
		QIcon EditSelectNone;
		QIcon EditTableCellMerge;
		QIcon EditTableCellSplit;
		QIcon EditTableDeleteColumn;
		QIcon EditTableDeleteRow;
		QIcon EditTableInsertColumnLeft;
		QIcon EditTableInsertColumnRight;
		QIcon EditTableInsertRowAbove;
		QIcon EditTableInsertRowUnder;
		QIcon EditText;
		QIcon EditUndo;
		QIcon Element;
		QIcon ElementDelete;
		QIcon ElementEdit;
		QIcon ElementNew;
		QIcon ElementSmall;
		QIcon EndLineCircle;
		QIcon EndLineDiamond;
		QIcon EndLineNone;
		QIcon EndLineSimple;
		QIcon EndLineTriangle;
		QIcon EPS;
		QIcon Flip;
		QIcon Folder;
		QIcon FolderDelete;
		QIcon FolderEdit;
		QIcon FolderNew;
		QIcon FolderOnlyThis;
		QIcon FolderOpen;
		QIcon FolderProperties;
		QIcon FolderShowAll;
		QIcon Forbidden;
		QIcon FullScreenEnter;
		QIcon FullScreenExit;
		QIcon GoBottom;
		QIcon GoDown;
		QIcon GoDownDouble;
		QIcon GoTop;
		QIcon GoUp;
		QIcon GoUpDouble;
		QIcon Ground;
		QIcon Grid;
		QIcon Hide;
		QIcon Home;
		QIcon HotSpot;
		QIcon InsertImage;
		QIcon Lower;
		QIcon IC_MoveFile;
		QIcon Mirror;
		QIcon Names;
		QIcon Neutral;
		QIcon NewDiagram;
		QIcon North;
		QIcon ObjectLocked;
		QIcon ObjectRotateRight;
		QIcon ObjectUnlocked;
		QIcon Orientations;
		QIcon PartArc;
		QIcon PartBezier;
		QIcon PartCircle;
		QIcon PartEllipse;
		QIcon PartLine;
		QIcon PartPolygon;
		QIcon PartRectangle;
		QIcon PartSelect;
		QIcon PartText;
		QIcon PartTextField;
		QIcon PDF;
		QIcon Phase;
		QIcon PrintAllPages;
		QIcon Printer;
		QIcon PrintLandscape;
		QIcon PrintPortrait;
		QIcon PrintTwoPages;
		QIcon Project;
		QIcon ProjectClose;
		QIcon ProjectNew;
		QIcon Projects;
		QIcon ProjectFile;
		QIcon ProjectFileGP;
		QIcon ProjectProperties;
		QIcon QETIcon;
		QIcon QETLogo;
		QIcon QETOxygenLogo;
		QIcon QtLogo;
		QIcon Raise;
		QIcon Remove;
		QIcon Restore;
		QIcon RunDxf;
		QIcon SendBackward;
		QIcon Settings;
		QIcon SinglePage;
		QIcon South;
		QIcon Start;
		QIcon TableOfContent;
		QIcon Terminal;
		QIcon TitleBlock;
		QIcon TitleBlockBottom;
		QIcon TitleBlockRight;
		QIcon TransformRotate;
		QIcon UserInformations;
		QIcon ViewFitWidth;
		QIcon ViewFitWindow;
		QIcon ViewMove;
		QIcon ViewRefresh;
		QIcon West;
		QIcon WindowNew;
		QIcon XmlTextFile;
		QIcon ZoomDraw;
		QIcon ZoomFitBest;
		QIcon ZoomIn;
		QIcon ZoomOriginal;
		QIcon ZoomOut;
		QIcon adding_image;
		QIcon adding_pdf;
		QIcon resize_image;
		QIcon sa;
		QIcon br;
		QIcon catalonia;
		QIcon cs;
		QIcon de;
		QIcon da;
		QIcon gr;
		QIcon en;
		QIcon es;
		QIcon fr;
		QIcon hr;
		QIcon hu;
		QIcon it;
		QIcon jp;
		QIcon ko;
		QIcon pl;
		QIcon pt;
		QIcon ro;
		QIcon ru;
		QIcon sl;
		QIcon nl;
		QIcon no;
		QIcon nl_BE;
		QIcon tr;
		QIcon uk;
		QIcon mn;
		QIcon zh;
		QIcon se;
		QIcon translation;
		QIcon listDrawings;
		QIcon AutoNum;
		QIcon TerminalStrip;
		QIcon QETManual;
		QIcon QETDonate;
		QIcon QETDownload;
		QIcon QETVideo;
		QIcon super;
		QIcon sub;
		QIcon textGroup;
		QIcon ElementMaster;
		QIcon ElementSlave;
		QIcon FolioXrefComing;
		QIcon ElementTerminal;
		QIcon ColorBrown;
		QIcon ColorGray;
		QIcon ColorOrange;
		QIcon ColorPurple;
		QIcon ColorHTMLPinkPink;
		QIcon ColorHTMLPinkLightPink;
		QIcon ColorHTMLPinkHotPink;
		QIcon ColorHTMLPinkDeepPink;
		QIcon ColorHTMLPinkPaleVioletRed;
		QIcon ColorHTMLPinkMediumVioletRed;
		QIcon ColorHTMLRedLightSalmon;
		QIcon ColorHTMLRedSalmon;
		QIcon ColorHTMLRedDarkSalmon;
		QIcon ColorHTMLRedLightCoral;
		QIcon ColorHTMLRedIndianRed;
		QIcon ColorHTMLRedCrimson;
		QIcon ColorHTMLRedFirebrick;
		QIcon ColorHTMLRedDarkRed;
		QIcon ColorHTMLRedRed;
		QIcon ColorHTMLOrangeOrangeRed;
		QIcon ColorHTMLOrangeTomato;
		QIcon ColorHTMLOrangeCoral;
		QIcon ColorHTMLOrangeDarkOrange;
		QIcon ColorHTMLOrangeOrange;
		QIcon ColorHTMLYellowYellow;
		QIcon ColorHTMLYellowLightYellow;
		QIcon ColorHTMLYellowLemonChiffon;
		QIcon ColorHTMLYellowLightGoldenrodYellow;
		QIcon ColorHTMLYellowPapayaWhip;
		QIcon ColorHTMLYellowMoccasin;
		QIcon ColorHTMLYellowPeachPuff;
		QIcon ColorHTMLYellowPaleGoldenrod;
		QIcon ColorHTMLYellowKhaki;
		QIcon ColorHTMLYellowDarkKhaki;
		QIcon ColorHTMLYellowGold;
		QIcon ColorHTMLBrownCornsilk;
		QIcon ColorHTMLBrownBlanchedAlmond;
		QIcon ColorHTMLBrownBisque;
		QIcon ColorHTMLBrownNavajoWhite;
		QIcon ColorHTMLBrownWheat;
		QIcon ColorHTMLBrownBurlywood;
		QIcon ColorHTMLBrownTan;
		QIcon ColorHTMLBrownRosyBrown;
		QIcon ColorHTMLBrownSandyBrown;
		QIcon ColorHTMLBrownGoldenrod;
		QIcon ColorHTMLBrownDarkGoldenrod;
		QIcon ColorHTMLBrownPeru;
		QIcon ColorHTMLBrownChocolate;
		QIcon ColorHTMLBrownSaddleBrown;
		QIcon ColorHTMLBrownSienna;
		QIcon ColorHTMLBrownBrown;
		QIcon ColorHTMLBrownMaroon;
		QIcon ColorHTMLGreenDarkOliveGreen;
		QIcon ColorHTMLGreenOlive;
		QIcon ColorHTMLGreenOliveDrab;
		QIcon ColorHTMLGreenYellowGreen;
		QIcon ColorHTMLGreenLimeGreen;
		QIcon ColorHTMLGreenLime;
		QIcon ColorHTMLGreenLawnGreen;
		QIcon ColorHTMLGreenChartreuse;
		QIcon ColorHTMLGreenGreenYellow;
		QIcon ColorHTMLGreenSpringGreen;
		QIcon ColorHTMLGreenMediumSpringGreen;
		QIcon ColorHTMLGreenLightGreen;
		QIcon ColorHTMLGreenPaleGreen;
		QIcon ColorHTMLGreenDarkSeaGreen;
		QIcon ColorHTMLGreenMediumAquamarine;
		QIcon ColorHTMLGreenMediumSeaGreen;
		QIcon ColorHTMLGreenSeaGreen;
		QIcon ColorHTMLGreenForestGreen;
		QIcon ColorHTMLGreenGreen;
		QIcon ColorHTMLGreenDarkGreen;
		QIcon ColorHTMLCyanAqua;
		QIcon ColorHTMLCyanCyan;
		QIcon ColorHTMLCyanLightCyan;
		QIcon ColorHTMLCyanPaleTurquoise;
		QIcon ColorHTMLCyanAquamarine;
		QIcon ColorHTMLCyanTurquoise;
		QIcon ColorHTMLCyanMediumTurquoise;
		QIcon ColorHTMLCyanDarkTurquoise;
		QIcon ColorHTMLCyanLightSeaGreen;
		QIcon ColorHTMLCyanCadetBlue;
		QIcon ColorHTMLCyanDarkCyan;
		QIcon ColorHTMLCyanTeal;
		QIcon ColorHTMLBlueLightSteelBlue;
		QIcon ColorHTMLBluePowderBlue;
		QIcon ColorHTMLBlueLightBlue;
		QIcon ColorHTMLBlueSkyBlue;
		QIcon ColorHTMLBlueLightSkyBlue;
		QIcon ColorHTMLBlueDeepSkyBlue;
		QIcon ColorHTMLBlueDodgerBlue;
		QIcon ColorHTMLBlueCornflowerBlue;
		QIcon ColorHTMLBlueSteelBlue;
		QIcon ColorHTMLBlueRoyalBlue;
		QIcon ColorHTMLBlueBlue;
		QIcon ColorHTMLBlueMediumBlue;
		QIcon ColorHTMLBlueDarkBlue;
		QIcon ColorHTMLBlueNavy;
		QIcon ColorHTMLBlueMidnightBlue;
		QIcon ColorHTMLPurpleLavender;
		QIcon ColorHTMLPurpleThistle;
		QIcon ColorHTMLPurplePlum;
		QIcon ColorHTMLPurpleViolet;
		QIcon ColorHTMLPurpleOrchid;
		QIcon ColorHTMLPurpleFuchsia;
		QIcon ColorHTMLPurpleMagenta;
		QIcon ColorHTMLPurpleMediumOrchid;
		QIcon ColorHTMLPurpleMediumPurple;
		QIcon ColorHTMLPurpleBlueViolet;
		QIcon ColorHTMLPurpleDarkViolet;
		QIcon ColorHTMLPurpleDarkOrchid;
		QIcon ColorHTMLPurpleDarkMagenta;
		QIcon ColorHTMLPurplePurple;
		QIcon ColorHTMLPurpleIndigo;
		QIcon ColorHTMLPurpleDarkSlateBlue;
		QIcon ColorHTMLPurpleSlateBlue;
		QIcon ColorHTMLPurpleMediumSlateBlue;
		QIcon ColorHTMLWhiteWhite;
		QIcon ColorHTMLWhiteSnow;
		QIcon ColorHTMLWhiteHoneydew;
		QIcon ColorHTMLWhiteMintCream;
		QIcon ColorHTMLWhiteAzure;
		QIcon ColorHTMLWhiteAliceBlue;
		QIcon ColorHTMLWhiteGhostWhite;
		QIcon ColorHTMLWhiteWhiteSmoke;
		QIcon ColorHTMLWhiteSeashell;
		QIcon ColorHTMLWhiteBeige;
		QIcon ColorHTMLWhiteOldLace;
		QIcon ColorHTMLWhiteFloralWhite;
		QIcon ColorHTMLWhiteIvory;
		QIcon ColorHTMLWhiteAntiqueWhite;
		QIcon ColorHTMLWhiteLinen;
		QIcon ColorHTMLWhiteLavenderBlush;
		QIcon ColorHTMLWhiteMistyRose;
		QIcon ColorHTMLGrayGainsboro;
		QIcon ColorHTMLGrayLightGray;
		QIcon ColorHTMLGraySilver;
		QIcon ColorHTMLGrayDarkGray;
		QIcon ColorHTMLGrayGray;
		QIcon ColorHTMLGrayDimGray;
		QIcon ColorHTMLGrayLightSlateGray;
		QIcon ColorHTMLGraySlateGray;
		QIcon ColorHTMLGrayDarkSlateGray;
		QIcon ColorHTMLGrayBlack;
	}
}

namespace {

/**
	Resource paths under which every icon is deliberately, meaningfully
	colored -- country flags for the language picker, and the wire/cable
	color-picker swatches -- and must never be recolored, regardless of
	how little of the image turns out to be saturated (a flag can be
	mostly white/black, e.g. South Korea's).
*/
bool pathIsAlwaysColored(const QString &path)
{
	return path.contains(QLatin1String("/24x16/"))
		|| path.contains(QLatin1String("/22x22/color/"));
}

/**
	Whether an icon's own drawing is "plain ink" (a monochrome glyph fit
	to recolor for the current theme) or "a deliberate color" (a
	semantic red/green/etc. icon, drawn once and never recolored). Based
	on the fraction of visible pixels that are meaningfully saturated,
	sampled on the largest available size for reliability.
*/
bool pixmapIsMask(const QPixmap &pixmap)
{
	if (pixmap.isNull())
		return true;
	QImage img = pixmap.toImage().convertToFormat(QImage::Format_ARGB32);
	int total = 0, saturated = 0;
	for (int y = 0; y < img.height(); ++y)
	{
		const QRgb *line = reinterpret_cast<const QRgb *>(img.constScanLine(y));
		for (int x = 0; x < img.width(); ++x)
		{
			QRgb px = line[x];
			if (qAlpha(px) <= 20)
				continue;
			++total;
			int r = qRed(px), g = qGreen(px), b = qBlue(px);
			int mx = qMax(r, qMax(g, b));
			int mn = qMin(r, qMin(g, b));
			if (mx - mn > 30)
				++saturated;
		}
	}
	if (total == 0)
		return true; // fully transparent: harmless either way, tint it
	return (double(saturated) / total) < 0.20;
}

/**
	QIconEngine that recolors a plain-ink icon's alpha mask to the
	current palette's QPalette::WindowText at every paint, so the same
	asset stays legible whether the current palette is light or dark.
	Icons classified (once, at construction, from their pristine source
	pixmaps) as a deliberate color instead just paint unchanged.
*/
class ThemedIconEngine : public QIconEngine
{
	public:
		explicit ThemedIconEngine(const QVector<QPixmap> &originals, bool forceColored) :
			m_originals(originals),
			m_isMask(!forceColored && !originals.isEmpty() && pixmapIsMask(largest()))
		{}

		QIconEngine *clone() const override
		{
			return new ThemedIconEngine(*this);
		}

		QString key() const override
		{
			return QStringLiteral("qet-themed-icon");
		}

		/**
			The size this engine will actually draw at for a given
			requested size. QIconEngine's default implementation returns
			the requested size unchanged, which would claim these icons
			can fill any box asked of them: QTreeWidget::iconSize() is
			50x50 in GenericPanel, so the 16x16 folio/folder art would be
			stretched to 50x50 and the rows grown to match. Report the
			source art's own size instead, shrunk to fit but never grown,
			which is what QPixmapIconEngine (the engine a plain
			QIcon(":/ico/...") uses) does.
		*/
		QSize actualSize(const QSize &size, QIcon::Mode, QIcon::State) override
		{
			return fittedSize(bestOriginal(size), size);
		}

		QPixmap pixmap(const QSize &size, QIcon::Mode mode, QIcon::State) override
		{
			QPixmap src = bestOriginal(size);
			if (src.isNull())
				return src;
			// Only ever scale down: a 22x22 asset asked for at 16x16 (a
			// menu, say) must come back at 16x16, not at its own size.
			const QSize target = fittedSize(src, size);
			// IgnoreAspectRatio: fittedSize() has already applied the
			// aspect ratio, and applying it twice loses a pixel on
			// non-square art (the 24x16 flags).
			if (src.size() != target)
				src = src.scaled(target, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
			QPixmap result = m_isMask ? tinted(src, currentTint()) : src;
			if (mode == QIcon::Disabled)
			{
				QStyleOption opt;
				result = QApplication::style()->generatedIconPixmap(QIcon::Disabled, result, &opt);
			}
			return result;
		}

		void paint(QPainter *painter, const QRect &rect, QIcon::Mode mode, QIcon::State state) override
		{
			const QPixmap pm = pixmap(rect.size(), mode, state);
			if (pm.isNull())
				return;
			// Centre the art in the rect at its own size rather than
			// stretching it across the whole rect, for callers that hand
			// us a box bigger than the art (again, QPixmapIconEngine's
			// behaviour via QIcon::paint()).
			QRect target(QPoint(0, 0), logicalSize(pm));
			target.moveCenter(rect.center());
			painter->drawPixmap(target, pm);
		}

		QList<QSize> availableSizes(QIcon::Mode = QIcon::Normal, QIcon::State = QIcon::Off) override
		{
			QList<QSize> sizes;
			for (const QPixmap &p : m_originals)
				sizes << p.size();
			return sizes;
		}

	private:
		QVector<QPixmap> m_originals;
		bool m_isMask;

		QPixmap largest() const
		{
			QPixmap best = m_originals.first();
			for (const QPixmap &p : m_originals)
				if (p.width() * p.height() > best.width() * best.height())
					best = p;
			return best;
		}

		QPixmap bestOriginal(const QSize &size) const
		{
			if (m_originals.isEmpty())
				return QPixmap();
			// Smallest available pixmap that still covers the requested
			// size, else the largest available (matches QIcon's own
			// "prefer scaling down over up" convention).
			const QPixmap *best = nullptr;
			for (const QPixmap &p : m_originals)
			{
				if (p.width() >= size.width())
				{
					if (!best || p.width() < best->width())
						best = &p;
				}
			}
			if (!best)
			{
				for (const QPixmap &p : m_originals)
					if (!best || p.width() > best->width())
						best = &p;
			}
			return *best;
		}

		/**
			\a pixmap's size in logical (device-independent) pixels.
			Written out rather than using QPixmap::deviceIndependentSize(),
			which needs Qt >= 6.2 while QET still builds against Qt 5.
		*/
		static QSize logicalSize(const QPixmap &pixmap)
		{
			const qreal dpr = pixmap.devicePixelRatio();
			if (qFuzzyCompare(dpr, qreal(1)))
				return pixmap.size();
			return QSize(qRound(pixmap.width() / dpr), qRound(pixmap.height() / dpr));
		}

		/**
			\a source's own size, shrunk to fit inside \a bounds if it is
			larger, never enlarged.
		*/
		static QSize fittedSize(const QPixmap &source, const QSize &bounds)
		{
			if (source.isNull())
				return QSize();
			QSize s = logicalSize(source);
			if (bounds.isValid() && (s.width() > bounds.width() || s.height() > bounds.height()))
				s.scale(bounds, Qt::KeepAspectRatio);
			return s;
		}

		static QColor currentTint()
		{
			return qApp->palette().color(QPalette::WindowText);
		}

		static QPixmap tinted(const QPixmap &src, const QColor &color)
		{
			QImage img = src.toImage().convertToFormat(QImage::Format_ARGB32_Premultiplied);
			QPainter p(&img);
			p.setCompositionMode(QPainter::CompositionMode_SourceIn);
			p.fillRect(img.rect(), color);
			p.end();
			return QPixmap::fromImage(img);
		}
};

} // namespace

QIcon QET::Icons::makeThemedIcon(const QStringList &paths)
{
	QVector<QPixmap> pixmaps;
	pixmaps.reserve(paths.size());
	bool forceColored = false;
	for (const QString &path : paths)
	{
		if (pathIsAlwaysColored(path))
			forceColored = true;
		QPixmap pm(path);
		if (!pm.isNull())
			pixmaps << pm;
	}
	return QIcon(new ThemedIconEngine(pixmaps, forceColored));
}

QIcon QET::Icons::makeThemedIconFromPixmaps(const QVector<QPixmap> &pixmaps)
{
	return QIcon(new ThemedIconEngine(pixmaps, false));
}

void QET::Icons::retintForPalette(const QPalette &)
{
	// ThemedIconEngine reads qApp->palette() live at every paint, so all
	// that's needed here is to stop Qt from handing back pixmaps it
	// cached under the old palette.
	QPixmapCache::clear();
}

/**
	Initialise les icones de l'application QElectroTech
*/
void QET::Icons::initIcons()
{
	// we may need to mirror some icons for right-to-left languages
	bool rtl = QApplication::isRightToLeft();
	QTransform reverse = QTransform().scale(-1, 1);
	
	Add = QET::Icons::makeThemedIcon({":/ico/16x16/list-add.png", ":/ico/22x22/list-add.png"});
	AddFolio = QET::Icons::makeThemedIcon({":/ico/16x16/folio-new.png"});
	Allowed = QET::Icons::makeThemedIcon({":/ico/16x16/user-online.png"});
	ApplicationExit = QET::Icons::makeThemedIcon({":/ico/16x16/application-exit.png", ":/ico/22x22/application-exit.png"});
	ArrowLeft = QET::Icons::makeThemedIcon({":/ico/16x16/arrow-left.png", ":/ico/22x22/arrow-left.png"});
	ArrowLeftDouble = QET::Icons::makeThemedIcon({":/ico/16x16/arrow-left-double.png", ":/ico/22x22/arrow-left-double.png"});
	ArrowRight = QET::Icons::makeThemedIcon({":/ico/16x16/arrow-right.png", ":/ico/22x22/arrow-right.png"});
	ArrowRightDouble = QET::Icons::makeThemedIcon({":/ico/16x16/arrow-right-double.png", ":/ico/22x22/arrow-right-double.png"});
	Autoconnect = QET::Icons::makeThemedIcon({":/ico/22x22/autoconnect.png"});
	BringForward = QET::Icons::makeThemedIcon({":/ico/22x22/bring_forward.png"});
	Cancel = QET::Icons::makeThemedIcon({":/ico/16x16/item-cancel.png"});
	Company = QET::Icons::makeThemedIcon({":/ico/16x16/go-company.png", ":/ico/22x22/go-company.png"});
	Conductor = QET::Icons::makeThemedIcon({":/ico/16x16/conductor.png"});
	ConductorEdit = QET::Icons::makeThemedIcon({":/ico/16x16/conductor-edit.png"});
	ConductorSettings = QET::Icons::makeThemedIcon({":/ico/16x16/conductor-reset.png", ":/ico/22x22/conductor2.png"});
	Configure = QET::Icons::makeThemedIcon({":/ico/16x16/configure.png", ":/ico/22x22/configure.png"});
	ConfigureToolbars = QET::Icons::makeThemedIcon({":/ico/16x16/configure-toolbars.png", ":/ico/22x22/configure-toolbars.png"});
	IC_CopyFile = QET::Icons::makeThemedIcon({":/ico/16x16/item-copy.png"});
	DiagramAdd = QET::Icons::makeThemedIcon({":/ico/16x16/folio-new.png", ":/ico/22x22/diagram_add.png"});
	Diagram = QET::Icons::makeThemedIcon({":/ico/16x16/diagram.png", ":/ico/diagram.png"});
	DiagramBg = QET::Icons::makeThemedIcon({":/ico/22x22/diagram_bg.png"});
	DiagramDelete = QET::Icons::makeThemedIcon({":/ico/16x16/folio-delete.png", ":/ico/22x22/diagram_del.png"});
	DialogCancel = QET::Icons::makeThemedIcon({":/ico/16x16/dialog-cancel.png", ":/ico/22x22/dialog-cancel.png"});
	DialogInformation = QET::Icons::makeThemedIcon({":/ico/16x16/folio-properties.png", ":/ico/22x22/dialog-information.png"});
	DialogOk = QET::Icons::makeThemedIcon({":/ico/16x16/dialog-ok.png", ":/ico/22x22/dialog-ok.png"});
	DocumentClose = QET::Icons::makeThemedIcon({":/ico/16x16/document-close.png", ":/ico/22x22/document-close.png"});
	DocumentExport = QET::Icons::makeThemedIcon({":/ico/16x16/document-export.png", ":/ico/22x22/document-export.png", ":/ico/128x128/document-export.png"});
	DocumentSpreadsheet = QET::Icons::makeThemedIcon({":/ico/16x16/export-csv.png"});
	DocumentImport = QET::Icons::makeThemedIcon({":/ico/16x16/document-import.png", ":/ico/22x22/document-import.png"});
	DocumentNew = QET::Icons::makeThemedIcon({":/ico/16x16/document-new.png", ":/ico/22x22/document-new.png"});
	DocumentOpen = QET::Icons::makeThemedIcon({":/ico/16x16/document-open.png", ":/ico/22x22/document-open.png"});
	DocumentOpenRecent = QET::Icons::makeThemedIcon({":/ico/16x16/document-open-recent.png", ":/ico/22x22/document-open-recent.png"});
	DocumentPrint = QET::Icons::makeThemedIcon({":/ico/16x16/document-print.png", ":/ico/22x22/document-print.png"});
	DocumentPrintFrame = QET::Icons::makeThemedIcon({":/ico/16x16/document-print-frame.png", ":/ico/48x48/document-print-frame.png"});
	DocumentSave = QET::Icons::makeThemedIcon({":/ico/16x16/document-save.png", ":/ico/22x22/document-save.png"});
	DocumentSaveAll = QET::Icons::makeThemedIcon({":/ico/16x16/document-save-all.png", ":/ico/22x22/document-save-all.png"});
	DocumentSaveAs = QET::Icons::makeThemedIcon({":/ico/16x16/document-save-as.png", ":/ico/22x22/document-save-as.png"});
	East = QET::Icons::makeThemedIcon({":/ico/16x16/east.png"});
	EditClear = QET::Icons::makeThemedIcon({":/ico/16x16/edit-clear.png", ":/ico/22x22/edit-clear.png"});
	EditText = QET::Icons::makeThemedIcon({":/ico/22x22/names.png"});
	adding_image = QET::Icons::makeThemedIcon({":/ico/22x22/insert-image.png"});
	adding_pdf = QET::Icons::makeThemedIcon({":/ico/22x22/pdf-import.png"});
	
	if (rtl) {
		EditClearLocationBar = QET::Icons::makeThemedIconFromPixmaps({
			QPixmap(":/ico/16x16/edit-clear-locationbar-ltr.png").transformed(reverse),
			QPixmap(":/ico/22x22/edit-clear-locationbar-ltr.png").transformed(reverse)
		});
	} else {
		EditClearLocationBar = QET::Icons::makeThemedIcon({":/ico/16x16/edit-clear-locationbar-ltr.png", ":/ico/22x22/edit-clear-locationbar-ltr.png"});
	}
	EditCopy = QET::Icons::makeThemedIcon({":/ico/16x16/edit-copy.png", ":/ico/22x22/edit-copy.png"});
	EditCut = QET::Icons::makeThemedIcon({":/ico/16x16/edit-cut.png", ":/ico/22x22/edit-cut.png"});
	EditDelete = QET::Icons::makeThemedIcon({":/ico/16x16/edit-delete.png", ":/ico/22x22/edit-delete.png"});
	EditPaste = QET::Icons::makeThemedIcon({":/ico/22x22/edit-paste.png", ":/ico/16x16/edit-paste.png"});
	if (rtl) {
		EditRedo = QET::Icons::makeThemedIconFromPixmaps({
			QPixmap(":/ico/16x16/edit-redo.png").transformed(reverse),
			QPixmap(":/ico/22x22/edit-redo.png").transformed(reverse)
		});
	} else {
		EditRedo = QET::Icons::makeThemedIcon({":/ico/16x16/edit-redo.png", ":/ico/22x22/edit-redo.png"});
	}
	EditRename = QET::Icons::makeThemedIcon({":/ico/16x16/edit-rename.png", ":/ico/22x22/edit-rename.png"});
	EditSelectAll = QET::Icons::makeThemedIcon({":/ico/16x16/edit-select-all.png", ":/ico/22x22/edit-select-all.png"});
	EditSelectInvert = QET::Icons::makeThemedIcon({":/ico/16x16/edit-select-invert.png"});
	EditSelectNone = QET::Icons::makeThemedIcon({":/ico/16x16/edit-select-none.png"});
	EditTableCellMerge = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-cell-merge.png", ":/ico/22x22/edit-table-cell-merge.png"});
	EditTableCellSplit = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-cell-split.png", ":/ico/22x22/edit-table-cell-split.png"});
	EditTableDeleteColumn = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-delete-column.png", ":/ico/22x22/edit-table-delete-column.png"});
	EditTableDeleteRow = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-delete-row.png", ":/ico/22x22/edit-table-delete-row.png"});
	EditTableInsertColumnLeft = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-insert-column-left.png", ":/ico/22x22/edit-table-insert-column-left.png"});
	EditTableInsertColumnRight = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-insert-column-right.png", ":/ico/22x22/edit-table-insert-column-right.png"});
	EditTableInsertRowAbove = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-insert-row-above.png", ":/ico/22x22/edit-table-insert-row-above.png"});
	EditTableInsertRowUnder = QET::Icons::makeThemedIcon({":/ico/16x16/edit-table-insert-row-under.png", ":/ico/22x22/edit-table-insert-row-under.png"});
	if (rtl) {
		EditUndo = QET::Icons::makeThemedIconFromPixmaps({
			QPixmap(":/ico/16x16/edit-undo.png").transformed(reverse),
			QPixmap(":/ico/22x22/edit-undo.png").transformed(reverse)
		});
	} else {
		EditUndo = QET::Icons::makeThemedIcon({":/ico/16x16/edit-undo.png", ":/ico/22x22/edit-undo.png"});
	}
	Element = QET::Icons::makeThemedIcon({":/ico/breeze-icons/16x16/mimetypes/application-x-qet-element.png", ":/ico/breeze-icons/22x22/mimetypes/application-x-qet-element.png", ":/ico/breeze-icons/32x32/mimetypes/application-x-qet-element.png"});
	ElementDelete = QET::Icons::makeThemedIcon({":/ico/16x16/element-delete.png", ":/ico/22x22/element-delete.png"});
	ElementEdit = QET::Icons::makeThemedIcon({":/ico/16x16/element-edit.png", ":/ico/22x22/element-edit.png"});
	ElementNew = QET::Icons::makeThemedIcon({":/ico/16x16/element-new.png", ":/ico/22x22/element-new.png"});
	ElementSmall = QET::Icons::makeThemedIcon({":/ico/16x16/element.png"});
	EndLineCircle = QET::Icons::makeThemedIcon({":/ico/16x16/endline-circle.png"});
	EndLineDiamond = QET::Icons::makeThemedIcon({":/ico/16x16/endline-diamond.png"});
	EndLineNone = QET::Icons::makeThemedIcon({":/ico/16x16/endline-none.png"});
	EndLineSimple = QET::Icons::makeThemedIcon({":/ico/16x16/endline-simple.png"});
	EndLineTriangle = QET::Icons::makeThemedIcon({":/ico/16x16/endline-triangle.png"});
	EPS = QET::Icons::makeThemedIcon({":/ico/32x32/image-x-eps.png"});
	Flip = QET::Icons::makeThemedIcon({":/ico/16x16/flip.png"});
	Folder = QET::Icons::makeThemedIcon({":/ico/16x16/folder.png"});
	FolderDelete = QET::Icons::makeThemedIcon({":/ico/16x16/folder-delete.png", ":/ico/22x22/folder-delete.png"});
	FolderEdit = QET::Icons::makeThemedIcon({":/ico/16x16/folder-edit.png", ":/ico/22x22/folder-edit.png"});
	FolderNew = QET::Icons::makeThemedIcon({":/ico/16x16/folder-new.png", ":/ico/22x22/folder-new.png"});
	FolderOnlyThis = QET::Icons::makeThemedIcon({":/ico/16x16/folder-only-this.png"});
	FolderOpen = QET::Icons::makeThemedIcon({":/ico/16x16/folder-open.png", ":/ico/22x22/folder-open.png"});
	FolderProperties = QET::Icons::makeThemedIcon({":/ico/16x16/folder-properties.png"});
	FolderShowAll = QET::Icons::makeThemedIcon({":/ico/16x16/folder-show-all.png"});
	Forbidden = QET::Icons::makeThemedIcon({":/ico/16x16/user-busy.png"});
	FullScreenEnter = QET::Icons::makeThemedIcon({":/ico/16x16/view-fullscreen.png", ":/ico/22x22/view-fullscreen.png"});
	FullScreenExit = QET::Icons::makeThemedIcon({":/ico/16x16/view-restore.png", ":/ico/22x22/view-restore.png"});
	GoBottom = QET::Icons::makeThemedIcon({":/ico/16x16/go-bottom.png"});
	GoDown = QET::Icons::makeThemedIcon({":/ico/16x16/go-down.png", ":/ico/22x22/go-down.png"});
	GoDownDouble = QET::Icons::makeThemedIcon({":/ico/16x16/go-down-double.png"});
	GoTop = QET::Icons::makeThemedIcon({":/ico/16x16/go-top.png"});
	GoUp = QET::Icons::makeThemedIcon({":/ico/16x16/go-up.png", ":/ico/22x22/go-up.png"});
	GoUpDouble = QET::Icons::makeThemedIcon({":/ico/16x16/go-up-double.png"});
	Ground = QET::Icons::makeThemedIcon({":/ico/16x16/ground.png"});
	Grid = QET::Icons::makeThemedIcon({":/ico/16x16/grid.png", ":/ico/22x22/grid.png"});
	Hide = QET::Icons::makeThemedIcon({":/ico/16x16/masquer.png"});
	Home = QET::Icons::makeThemedIcon({":/ico/16x16/go-home.png", ":/ico/22x22/go-home.png"});
	HotSpot = QET::Icons::makeThemedIcon({":/ico/22x22/hotspot.png"});
	InsertImage = QET::Icons::makeThemedIcon({":/ico/22x22/insert-image.png"});
	Lower = QET::Icons::makeThemedIcon({":/ico/22x22/lower.png"});
	IC_MoveFile = QET::Icons::makeThemedIcon({":/ico/16x16/item-move.png"});
	Mirror = QET::Icons::makeThemedIcon({":/ico/16x16/mirror.png"});
	Names = QET::Icons::makeThemedIcon({":/ico/22x22/names.png"});
	Neutral = QET::Icons::makeThemedIcon({":/ico/16x16/neutral.png"});
	NewDiagram = QET::Icons::makeThemedIcon({":/ico/128x128/diagram.png"});
	North = QET::Icons::makeThemedIcon({":/ico/16x16/north.png"});
	ObjectLocked = QET::Icons::makeThemedIcon({":/ico/22x22/object-locked.png"});
	ObjectRotateRight = QET::Icons::makeThemedIcon({":/ico/16x16/object-rotate-right.png", ":/ico/22x22/object-rotate-right.png"});
	ObjectUnlocked = QET::Icons::makeThemedIcon({":/ico/22x22/object-unlocked.png"});
	Orientations = QET::Icons::makeThemedIcon({":/ico/16x16/orientations.png"});
	PartArc = QET::Icons::makeThemedIcon({":/ico/22x22/arc.png"});
	PartBezier = QET::Icons::makeThemedIcon({":/ico/breeze-icons/scalable/apps/hidef/draw-bezier-curves.svg"});
	PartCircle = QET::Icons::makeThemedIcon({":/ico/16x16/circle.png"});
	PartEllipse = QET::Icons::makeThemedIcon({":/ico/22x22/ellipse.png"});
	PartLine = QET::Icons::makeThemedIcon({":/ico/22x22/line.png"});
	PartPolygon = QET::Icons::makeThemedIcon({":/ico/22x22/polygon.png"});
	PartRectangle = QET::Icons::makeThemedIcon({":/ico/22x22/rectangle.png"});
	PartSelect = QET::Icons::makeThemedIcon({":/ico/16x16/select.png", ":/ico/22x22/select.png"});
	PartText = QET::Icons::makeThemedIcon({":/ico/22x22/text.png"});
	PartTextField = QET::Icons::makeThemedIcon({":/ico/22x22/textfield.png"});
	PDF = QET::Icons::makeThemedIcon({":/ico/32x32/application-pdf.png"});
	Phase = QET::Icons::makeThemedIcon({":/ico/16x16/phase.png"});
	PrintAllPages = QET::Icons::makeThemedIcon({":/ico/22x22/all_pages.png"});
	Printer = QET::Icons::makeThemedIcon({":/ico/32x32/printer.png", ":/ico/128x128/printer.png"});
	PrintLandscape = QET::Icons::makeThemedIcon({":/ico/22x22/landscape.png"});
	PrintPortrait = QET::Icons::makeThemedIcon({":/ico/22x22/portrait.png"});
	PrintTwoPages = QET::Icons::makeThemedIcon({":/ico/22x22/two_pages.png"});
	Projects = QET::Icons::makeThemedIcon({":/ico/128x128/project.png"});
	ProjectClose = QET::Icons::makeThemedIcon({":/ico/16x16/project-close.png", ":/ico/22x22/project-close.png"});
	ProjectNew = QET::Icons::makeThemedIcon({":/ico/16x16/project-new.png", ":/ico/22x22/project-new.png"});
	ProjectFile = QET::Icons::makeThemedIcon({":/ico/breeze-icons/16x16/mimetypes/application-x-qet-project.png", ":/ico/breeze-icons/22x22/mimetypes/application-x-qet-project.png", ":/ico/breeze-icons/32x32/mimetypes/application-x-qet-project.png"});
	ProjectProperties = QET::Icons::makeThemedIcon({":/ico/16x16/project-properties.png"});
	QETDonate = QET::Icons::makeThemedIcon({":/ico/16x16/help-donate.png"});
	QETDownload = QET::Icons::makeThemedIcon({":/ico/16x16/edit-download.png"});
	QETIcon = QET::Icons::makeThemedIcon({":/ico/256x256/qelectrotech.png"});
	ProjectFileGP = QET::Icons::makeThemedIcon({":/ico/16x16/project.png"});
	QETLogo = QET::Icons::makeThemedIcon({":/ico/16x16/qet.png", ":/ico/256x256/qet.png"});
	QETManual = QET::Icons::makeThemedIcon({":/ico/16x16/help-contents.png"});
	QETOxygenLogo = QET::Icons::makeThemedIcon({":/ico/breeze-icons/128x128/apps/qelectrotech.png", ":/ico/breeze-icons/16x16/apps/qelectrotech.png", ":/ico/breeze-icons/22x22/apps/qelectrotech.png", ":/ico/breeze-icons/256x256/apps/qelectrotech.png", ":/ico/breeze-icons/32x32/apps/qelectrotech.png", ":/ico/breeze-icons/48x48/apps/qelectrotech.png", ":/ico/breeze-icons/64x64/apps/qelectrotech.png"});
	QETVideo = QET::Icons::makeThemedIcon({":/ico/16x16/kdenlive-show-video.png"});
	QtLogo = QET::Icons::makeThemedIcon({":/ico/16x16/qt.png"});
	Raise = QET::Icons::makeThemedIcon({":/ico/22x22/raise.png"});
	Remove = QET::Icons::makeThemedIcon({":/ico/16x16/list-remove.png", ":/ico/22x22/list-remove.png"});
	resize_image = QET::Icons::makeThemedIcon({":/ico/22x22/transform-scale.png"});
	Restore = QET::Icons::makeThemedIcon({":/ico/22x22/restaurer.png"});
	RunDxf = QET::Icons::makeThemedIcon({":/ico/16x16/run-dxf.png"});
	SendBackward = QET::Icons::makeThemedIcon({":/ico/22x22/send_backward.png"});
	Settings = QET::Icons::makeThemedIcon({":/ico/128x128/settings.png"});
	SinglePage = QET::Icons::makeThemedIcon({":/ico/22x22/single_page.png"});
	South = QET::Icons::makeThemedIcon({":/ico/16x16/south.png"});
	Start = QET::Icons::makeThemedIcon({":/ico/22x22/start.png"});
	TableOfContent = QET::Icons::makeThemedIcon({":/ico/16x16/table-of-content.png"});
	Terminal = QET::Icons::makeThemedIcon({":/ico/22x22/terminal.png"});
	TerminalStrip = QET::Icons::makeThemedIcon({":/ico/16x16/terminalstrip.png", ":/ico/22x22/terminalstrip.png"});
	TitleBlock = QET::Icons::makeThemedIcon({":/ico/16x16/label.png", ":/ico/22x22/label.png"});
	TitleBlockBottom = QET::Icons::makeThemedIcon({":/ico/22x22/titleblock-bottom.png"});
	TitleBlockRight = QET::Icons::makeThemedIcon({":/ico/22x22/titleblock-right.png"});
	TransformRotate = QET::Icons::makeThemedIcon({":/ico/16x16/transform-rotate.png"});
	UserInformations = QET::Icons::makeThemedIcon({":/ico/16x16/preferences-desktop-user.png", ":/ico/22x22/preferences-desktop-user.png"});
	ViewFitWidth = QET::Icons::makeThemedIcon({":/ico/22x22/view_fit_width.png"});
	ViewFitWindow = QET::Icons::makeThemedIcon({":/ico/22x22/view-fit-window.png"});
	ViewMove = QET::Icons::makeThemedIcon({":/ico/16x16/move.png", ":/ico/22x22/move.png"});
	if (rtl) {
		ViewRefresh = QET::Icons::makeThemedIconFromPixmaps({
			QPixmap(":/ico/16x16/view-refresh.png").transformed(reverse),
			QPixmap(":/ico/22x22/view-refresh.png").transformed(reverse)
		});
	} else {
		ViewRefresh = QET::Icons::makeThemedIcon({":/ico/16x16/view-refresh.png", ":/ico/22x22/view-refresh.png"});
	}
	West = QET::Icons::makeThemedIcon({":/ico/16x16/west.png"});
	WindowNew = QET::Icons::makeThemedIcon({":/ico/16x16/window-new.png", ":/ico/22x22/window-new.png"});
	XmlTextFile = QET::Icons::makeThemedIcon({":/ico/16x16/text-xml.png", ":/ico/22x22/text-xml.png", ":/ico/32x32/text-xml.png"});
	ZoomDraw = QET::Icons::makeThemedIcon({":/ico/16x16/zoom-draw.png", ":/ico/22x22/zoom-draw.png"});
	ZoomFitBest = QET::Icons::makeThemedIcon({":/ico/16x16/zoom-fit-best.png", ":/ico/22x22/zoom-fit-best.png"});
	ZoomIn = QET::Icons::makeThemedIcon({":/ico/16x16/zoom-in.png", ":/ico/22x22/zoom-in.png"});
	ZoomOriginal = QET::Icons::makeThemedIcon({":/ico/16x16/zoom-original.png", ":/ico/22x22/zoom-original.png"});
	ZoomOut = QET::Icons::makeThemedIcon({":/ico/16x16/zoom-out.png", ":/ico/22x22/zoom-out.png"});
	sa = QET::Icons::makeThemedIcon({":/ico/24x16/sa.png"});
	br = QET::Icons::makeThemedIcon({":/ico/24x16/br.png"});
	catalonia = QET::Icons::makeThemedIcon({":/ico/24x16/catalonia.png"});
	cs = QET::Icons::makeThemedIcon({":/ico/24x16/cs.png"});
	da = QET::Icons::makeThemedIcon({":/ico/24x16/dk.png"});
	de = QET::Icons::makeThemedIcon({":/ico/24x16/de.png"});
	gr = QET::Icons::makeThemedIcon({":/ico/24x16/gr.png"});
	en = QET::Icons::makeThemedIcon({":/ico/24x16/en.png"});
	es = QET::Icons::makeThemedIcon({":/ico/24x16/es.png"});
	fr = QET::Icons::makeThemedIcon({":/ico/24x16/fr.png"});
	hr = QET::Icons::makeThemedIcon({":/ico/24x16/hr.png"});
	hu = QET::Icons::makeThemedIcon({":/ico/24x16/hu.png"});
	it = QET::Icons::makeThemedIcon({":/ico/24x16/it.png"});
	jp = QET::Icons::makeThemedIcon({":/ico/24x16/jp.png"});
	ko = QET::Icons::makeThemedIcon({":/ico/24x16/kr.png"});
	pl = QET::Icons::makeThemedIcon({":/ico/24x16/pl.png"});
	pt = QET::Icons::makeThemedIcon({":/ico/24x16/pt.png"});
	ro = QET::Icons::makeThemedIcon({":/ico/24x16/ro.png"});
	ru = QET::Icons::makeThemedIcon({":/ico/24x16/ru.png"});
	sl = QET::Icons::makeThemedIcon({":/ico/24x16/sl.png"});
	nl = QET::Icons::makeThemedIcon({":/ico/24x16/nl.png"});
	no = QET::Icons::makeThemedIcon({":/ico/24x16/no.png"});
	nl_BE = QET::Icons::makeThemedIcon({":/ico/24x16/nl_BE.png"});
	tr = QET::Icons::makeThemedIcon({":/ico/24x16/tr.png"});
	uk = QET::Icons::makeThemedIcon({":/ico/24x16/ua.png"});
	mn = QET::Icons::makeThemedIcon({":/ico/24x16/mn.png"});
	zh = QET::Icons::makeThemedIcon({":/ico/24x16/zh.png"});
	se = QET::Icons::makeThemedIcon({":/ico/24x16/se.png"});
	translation = QET::Icons::makeThemedIcon({":/ico/22x22/applications-development-translation.png"});
	listDrawings = QET::Icons::makeThemedIcon({":/ico/48x48/view-pim-journal.png"});
	AutoNum = QET::Icons::makeThemedIcon({":/ico/128x128/plasmagik.png"});
	sub = QET::Icons::makeThemedIcon({":/ico/22x22/format-text-subscript.png"});
	super = QET::Icons::makeThemedIcon({":/ico/22x22/format-text-superscript.png"});
	textGroup = QET::Icons::makeThemedIcon({":/ico/16x16/object-group.png"});
	ElementMaster = QET::Icons::makeThemedIcon({":/ico/16x16/element-master.png"});
	ElementSlave = QET::Icons::makeThemedIcon({":/ico/16x16/element-slave.png"});
	FolioXrefComing = QET::Icons::makeThemedIcon({":/ico/16x16/folio-ref-coming.png"});
	ElementTerminal = QET::Icons::makeThemedIcon({":/ico/16x16/terminal.png"});
	ColorBrown = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-brown.png"});
	ColorGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-gray.png"});
	ColorOrange = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-orange.png"});
	ColorPurple = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-purple.png"});
	ColorHTMLPinkPink = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-01-pink-01-pink.png"});
	ColorHTMLPinkLightPink = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-01-pink-02-lightpink.png"});
	ColorHTMLPinkHotPink = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-01-pink-03-hotpink.png"});
	ColorHTMLPinkDeepPink = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-01-pink-04-deeppink.png"});
	ColorHTMLPinkPaleVioletRed = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-01-pink-05-palevioletred.png"});
	ColorHTMLPinkMediumVioletRed = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-01-pink-06-mediumvioletred.png"});
	ColorHTMLRedLightSalmon = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-01-lightsalmon.png"});
	ColorHTMLRedSalmon = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-02-salmon.png"});
	ColorHTMLRedDarkSalmon = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-03-darksalmon.png"});
	ColorHTMLRedLightCoral = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-04-lightcoral.png"});
	ColorHTMLRedIndianRed = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-05-indianred.png"});
	ColorHTMLRedCrimson = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-06-crimson.png"});
	ColorHTMLRedFirebrick = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-07-firebrick.png"});
	ColorHTMLRedDarkRed = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-08-darkred.png"});
	ColorHTMLRedRed = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-02-red-09-red.png"});
	ColorHTMLOrangeOrangeRed = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-03-orange-01-orangered.png"});
	ColorHTMLOrangeTomato = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-03-orange-02-tomato.png"});
	ColorHTMLOrangeCoral = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-03-orange-03-coral.png"});
	ColorHTMLOrangeDarkOrange = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-03-orange-04-darkorange.png"});
	ColorHTMLOrangeOrange = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-03-orange-05-orange.png"});
	ColorHTMLYellowYellow = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-01-yellow.png"});
	ColorHTMLYellowLightYellow = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-02-lightyellow.png"});
	ColorHTMLYellowLemonChiffon = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-03-lemonchiffon.png"});
	ColorHTMLYellowLightGoldenrodYellow = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-04-lightgoldenrodyellow.png"});
	ColorHTMLYellowPapayaWhip = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-05-papayawhip.png"});
	ColorHTMLYellowMoccasin = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-06-moccasin.png"});
	ColorHTMLYellowPeachPuff = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-07-peachpuff.png"});
	ColorHTMLYellowPaleGoldenrod = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-08-palegoldenrod.png"});
	ColorHTMLYellowKhaki = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-09-khaki.png"});
	ColorHTMLYellowDarkKhaki = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-10-darkkhaki.png"});
	ColorHTMLYellowGold = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-04-yellow-11-gold.png"});
	ColorHTMLBrownCornsilk = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-01-cornsilk.png"});
	ColorHTMLBrownBlanchedAlmond = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-02-blanchedalmond.png"});
	ColorHTMLBrownBisque = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-03-bisque.png"});
	ColorHTMLBrownNavajoWhite = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-04-navajowhite.png"});
	ColorHTMLBrownWheat = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-05-wheat.png"});
	ColorHTMLBrownBurlywood = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-06-burlywood.png"});
	ColorHTMLBrownTan = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-07-tan.png"});
	ColorHTMLBrownRosyBrown = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-08-rosybrown.png"});
	ColorHTMLBrownSandyBrown = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-09-sandybrown.png"});
	ColorHTMLBrownGoldenrod = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-10-goldenrod.png"});
	ColorHTMLBrownDarkGoldenrod = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-11-darkgoldenrod.png"});
	ColorHTMLBrownPeru = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-12-peru.png"});
	ColorHTMLBrownChocolate = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-13-chocolate.png"});
	ColorHTMLBrownSaddleBrown = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-14-saddlebrown.png"});
	ColorHTMLBrownSienna = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-15-sienna.png"});
	ColorHTMLBrownBrown = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-16-brown.png"});
	ColorHTMLBrownMaroon = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-05-brown-17-maroon.png"});
	ColorHTMLGreenDarkOliveGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-01-darkolivegreen.png"});
	ColorHTMLGreenOlive = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-02-olive.png"});
	ColorHTMLGreenOliveDrab = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-03-olivedrab.png"});
	ColorHTMLGreenYellowGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-04-yellowgreen.png"});
	ColorHTMLGreenLimeGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-05-limegreen.png"});
	ColorHTMLGreenLime = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-06-lime.png"});
	ColorHTMLGreenLawnGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-07-lawngreen.png"});
	ColorHTMLGreenChartreuse = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-08-chartreuse.png"});
	ColorHTMLGreenGreenYellow = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-09-greenyellow.png"});
	ColorHTMLGreenSpringGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-10-springgreen.png"});
	ColorHTMLGreenMediumSpringGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-11-mediumspringgreen.png"});
	ColorHTMLGreenLightGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-12-lightgreen.png"});
	ColorHTMLGreenPaleGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-13-palegreen.png"});
	ColorHTMLGreenDarkSeaGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-14-darkseagreen.png"});
	ColorHTMLGreenMediumAquamarine = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-15-mediumaquamarine.png"});
	ColorHTMLGreenMediumSeaGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-16-mediumseagreen.png"});
	ColorHTMLGreenSeaGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-17-seagreen.png"});
	ColorHTMLGreenForestGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-18-forestgreen.png"});
	ColorHTMLGreenGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-19-green.png"});
	ColorHTMLGreenDarkGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-06-green-20-darkgreen.png"});
	ColorHTMLCyanAqua = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-01-aqua.png"});
	ColorHTMLCyanCyan = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-02-cyan.png"});
	ColorHTMLCyanLightCyan = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-03-lightcyan.png"});
	ColorHTMLCyanPaleTurquoise = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-04-paleturquoise.png"});
	ColorHTMLCyanAquamarine = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-05-aquamarine.png"});
	ColorHTMLCyanTurquoise = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-06-turquoise.png"});
	ColorHTMLCyanMediumTurquoise = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-07-mediumturquoise.png"});
	ColorHTMLCyanDarkTurquoise = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-08-darkturquoise.png"});
	ColorHTMLCyanLightSeaGreen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-09-lightseagreen.png"});
	ColorHTMLCyanCadetBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-10-cadetblue.png"});
	ColorHTMLCyanDarkCyan = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-11-darkcyan.png"});
	ColorHTMLCyanTeal = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-07-cyan-12-teal.png"});
	ColorHTMLBlueLightSteelBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-01-lightsteelblue.png"});
	ColorHTMLBluePowderBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-02-powderblue.png"});
	ColorHTMLBlueLightBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-03-lightblue.png"});
	ColorHTMLBlueSkyBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-04-skyblue.png"});
	ColorHTMLBlueLightSkyBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-05-lightskyblue.png"});
	ColorHTMLBlueDeepSkyBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-06-deepskyblue.png"});
	ColorHTMLBlueDodgerBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-07-dodgerblue.png"});
	ColorHTMLBlueCornflowerBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-08-cornflowerblue.png"});
	ColorHTMLBlueSteelBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-09-steelblue.png"});
	ColorHTMLBlueRoyalBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-10-royalblue.png"});
	ColorHTMLBlueBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-11-blue.png"});
	ColorHTMLBlueMediumBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-12-mediumblue.png"});
	ColorHTMLBlueDarkBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-13-darkblue.png"});
	ColorHTMLBlueNavy = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-14-navy.png"});
	ColorHTMLBlueMidnightBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-08-blue-15-midnightblue.png"});
	ColorHTMLPurpleLavender = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-01-lavender.png"});
	ColorHTMLPurpleThistle = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-02-thistle.png"});
	ColorHTMLPurplePlum = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-03-plum.png"});
	ColorHTMLPurpleViolet = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-04-violet.png"});
	ColorHTMLPurpleOrchid = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-05-orchid.png"});
	ColorHTMLPurpleFuchsia = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-06-fuchsia.png"});
	ColorHTMLPurpleMagenta = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-07-magenta.png"});
	ColorHTMLPurpleMediumOrchid = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-08-mediumorchid.png"});
	ColorHTMLPurpleMediumPurple = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-09-mediumpurple.png"});
	ColorHTMLPurpleBlueViolet = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-10-blueviolet.png"});
	ColorHTMLPurpleDarkViolet = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-11-darkviolet.png"});
	ColorHTMLPurpleDarkOrchid = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-12-darkorchid.png"});
	ColorHTMLPurpleDarkMagenta = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-13-darkmagenta.png"});
	ColorHTMLPurplePurple = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-14-purple.png"});
	ColorHTMLPurpleIndigo = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-15-indigo.png"});
	ColorHTMLPurpleDarkSlateBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-16-darkslateblue.png"});
	ColorHTMLPurpleSlateBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-17-slateblue.png"});
	ColorHTMLPurpleMediumSlateBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-09-purple-18-mediumslateblue.png"});
	ColorHTMLWhiteWhite = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-01-white.png"});
	ColorHTMLWhiteSnow = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-02-snow.png"});
	ColorHTMLWhiteHoneydew = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-03-honeydew.png"});
	ColorHTMLWhiteMintCream = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-04-mintcream.png"});
	ColorHTMLWhiteAzure = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-05-azure.png"});
	ColorHTMLWhiteAliceBlue = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-06-aliceblue.png"});
	ColorHTMLWhiteGhostWhite = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-07-ghostwhite.png"});
	ColorHTMLWhiteWhiteSmoke = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-08-whitesmoke.png"});
	ColorHTMLWhiteSeashell = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-09-seashell.png"});
	ColorHTMLWhiteBeige = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-10-beige.png"});
	ColorHTMLWhiteOldLace = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-11-oldlace.png"});
	ColorHTMLWhiteFloralWhite = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-12-floralwhite.png"});
	ColorHTMLWhiteIvory = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-13-ivory.png"});
	ColorHTMLWhiteAntiqueWhite = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-14-antiquewhite.png"});
	ColorHTMLWhiteLinen = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-15-linen.png"});
	ColorHTMLWhiteLavenderBlush = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-16-lavenderblush.png"});
	ColorHTMLWhiteMistyRose = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-10-white-17-mistyrose.png"});
	ColorHTMLGrayGainsboro = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-01-gainsboro.png"});
	ColorHTMLGrayLightGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-02-lightgray.png"});
	ColorHTMLGraySilver = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-03-silver.png"});
	ColorHTMLGrayDarkGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-04-darkgray.png"});
	ColorHTMLGrayGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-05-gray.png"});
	ColorHTMLGrayDimGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-06-dimgray.png"});
	ColorHTMLGrayLightSlateGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-07-lightslategray.png"});
	ColorHTMLGraySlateGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-08-slategray.png"});
	ColorHTMLGrayDarkSlateGray = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-09-darkslategray.png"});
	ColorHTMLGrayBlack = QET::Icons::makeThemedIcon({":/ico/22x22/color/color-11-gray-10-black.png"});
}
