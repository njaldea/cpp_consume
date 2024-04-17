cmake_minimum_required(VERSION 3.27.1)

project(cpp_consume CXX)

include(cmake/coverage.cmake)
include(cmake/toolchain.cmake)
include(cmake/quality.cmake)
include(cmake/test.cmake)

add_subdirectory(src)