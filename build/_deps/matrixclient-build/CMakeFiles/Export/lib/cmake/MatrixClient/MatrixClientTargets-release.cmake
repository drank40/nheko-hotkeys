#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MatrixClient::MatrixClient" for configuration "Release"
set_property(TARGET MatrixClient::MatrixClient APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MatrixClient::MatrixClient PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmatrix_client.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS MatrixClient::MatrixClient )
list(APPEND _IMPORT_CHECK_FILES_FOR_MatrixClient::MatrixClient "${_IMPORT_PREFIX}/lib/libmatrix_client.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
