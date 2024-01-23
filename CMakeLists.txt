cmake_minimum_required(VERSION 3.10)
project("ThePrivateYolk")
add_executable("ThePrivateYolk" "ThePrivateYolk.cpp")
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set_target_properties(
  "ThePrivateYolk"
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build
)
