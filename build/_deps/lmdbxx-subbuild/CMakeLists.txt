# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.22.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(lmdbxx-populate NONE)



include(ExternalProject)
ExternalProject_Add(lmdbxx-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://raw.githubusercontent.com/hoytech/lmdbxx/1.0.0/lmdb++.h" DOWNLOAD_NO_EXTRACT YES
                    SOURCE_DIR          "/home/renny/doc/c++/nheko/build/_deps/lmdbxx-src"
                    BINARY_DIR          "/home/renny/doc/c++/nheko/build/_deps/lmdbxx-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


ExternalProject_Get_Property(lmdbxx-populate DOWNLOADED_FILE)
get_filename_component(dlFileName "${DOWNLOADED_FILE}" NAME)

ExternalProject_Add_Step(lmdbxx-populate copyfile
  COMMAND    "/usr/bin/cmake" -E copy_if_different
             "<DOWNLOADED_FILE>" "/home/renny/doc/c++/nheko/build/_deps/lmdbxx-src"
  DEPENDEES  patch
  DEPENDERS  configure
  BYPRODUCTS "/home/renny/doc/c++/nheko/build/_deps/lmdbxx-src/${dlFileName}"
  COMMENT    "Copying file to SOURCE_DIR"
)

