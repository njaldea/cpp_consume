cmake_minimum_required(VERSION 3.27.1)

project(external_trial CXX)

set(ENABLE_TEST             OFF CACHE BOOL "[0 | OFF - 1 | ON]: build tests?")

include(cmake/toolchain.cmake)
include(cmake/quality.cmake)
include(cmake/test.cmake)

find_package(nil CONFIG REQUIRED)

add_executable(trial main.cpp)
target_link_libraries(trial PRIVATE nil::cli)