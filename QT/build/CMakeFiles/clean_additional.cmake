# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/cezar_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/cezar_autogen.dir/ParseCache.txt"
  "cezar_autogen"
  )
endif()
