
if(NOT "/home/renny/doc/c++/nheko/build/_deps/matrixclient-subbuild/matrixclient-populate-prefix/src/matrixclient-populate-stamp/matrixclient-populate-gitinfo.txt" IS_NEWER_THAN "/home/renny/doc/c++/nheko/build/_deps/matrixclient-subbuild/matrixclient-populate-prefix/src/matrixclient-populate-stamp/matrixclient-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/renny/doc/c++/nheko/build/_deps/matrixclient-subbuild/matrixclient-populate-prefix/src/matrixclient-populate-stamp/matrixclient-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/renny/doc/c++/nheko/build/_deps/matrixclient-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/renny/doc/c++/nheko/build/_deps/matrixclient-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/Nheko-Reborn/mtxclient.git" "matrixclient-src"
    WORKING_DIRECTORY "/home/renny/doc/c++/nheko/build/_deps"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/Nheko-Reborn/mtxclient.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout a3fec0ae53762a8a482cde50c9709671bcf0548d --
  WORKING_DIRECTORY "/home/renny/doc/c++/nheko/build/_deps/matrixclient-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'a3fec0ae53762a8a482cde50c9709671bcf0548d'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/renny/doc/c++/nheko/build/_deps/matrixclient-src"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/renny/doc/c++/nheko/build/_deps/matrixclient-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/renny/doc/c++/nheko/build/_deps/matrixclient-subbuild/matrixclient-populate-prefix/src/matrixclient-populate-stamp/matrixclient-populate-gitinfo.txt"
    "/home/renny/doc/c++/nheko/build/_deps/matrixclient-subbuild/matrixclient-populate-prefix/src/matrixclient-populate-stamp/matrixclient-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/renny/doc/c++/nheko/build/_deps/matrixclient-subbuild/matrixclient-populate-prefix/src/matrixclient-populate-stamp/matrixclient-populate-gitclone-lastrun.txt'")
endif()

