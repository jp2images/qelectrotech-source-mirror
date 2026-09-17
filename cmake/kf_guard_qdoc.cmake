# Copyright 2006 The QElectroTech Team
# This file is part of QElectroTech.
#
# QElectroTech is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# QElectroTech is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with QElectroTech. If not, see <http://www.gnu.org/licenses/>.

# FetchContent PATCH_COMMAND for the KDE frameworks, run in the framework's
# source directory as `cmake -P kf_guard_qdoc.cmake`.
#
# Since KF 6.28 every framework's top-level CMakeLists.txt does
# `include(ECMGenerateQDoc)`. That ECM module creates five global targets
# (prepare_docs, generate_docs, ...) without checking whether they exist,
# so the second framework built in the same tree fails with "cannot create
# target because another target with the same name already exists"
# (CMP0002). A framework built on its own never sees this.
#
# The frameworks reset CMAKE_MODULE_PATH to ECM's, so the module cannot be
# overridden from outside. Instead the include is wrapped so that only the
# first framework loads the module; the function it defines is global and
# serves the others. Idempotent: a file already carrying the guard is left
# alone.

set(cmakelists "${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt")
if(NOT EXISTS "${cmakelists}")
  message(FATAL_ERROR "kf_guard_qdoc.cmake: no CMakeLists.txt in ${CMAKE_CURRENT_SOURCE_DIR}")
endif()

file(READ "${cmakelists}" content)
if(content MATCHES "NOT COMMAND ecm_generate_qdoc")
  return()
endif()

string(REPLACE
  "include(ECMGenerateQDoc)"
  "if(NOT COMMAND ecm_generate_qdoc) # QElectroTech: see cmake/kf_guard_qdoc.cmake\n  include(ECMGenerateQDoc)\nendif()"
  patched "${content}")
if(patched STREQUAL content)
  return()
endif()
file(WRITE "${cmakelists}" "${patched}")
message(STATUS "kf_guard_qdoc: guarded include(ECMGenerateQDoc) in ${cmakelists}")
