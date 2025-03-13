#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "p1_ej2_interface::p1_ej2_interface__rosidl_typesupport_c" for configuration ""
set_property(TARGET p1_ej2_interface::p1_ej2_interface__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(p1_ej2_interface::p1_ej2_interface__rosidl_typesupport_c PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libp1_ej2_interface__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libp1_ej2_interface__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS p1_ej2_interface::p1_ej2_interface__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_p1_ej2_interface::p1_ej2_interface__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libp1_ej2_interface__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
