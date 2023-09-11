cmake_minimum_required(VERSION 3.27.1)

project(external_trial CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/out" CACHE PATH "install path" FORCE)
endif()

# only needed if there are shared libraries to be installed
set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib")
set(CMAKE_BUILD_WITH_INSTALL_RPATH true)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_compile_options(-fno-rtti)
add_compile_options(-flto)
add_compile_options(-Werror)
add_compile_options(-Wall)
add_compile_options(-Wextra)
add_compile_options(-Wpedantic)
add_compile_options(-pedantic-errors)
add_compile_options(-Wconversion)
add_compile_options(-Wsign-conversion)

find_package(nil CONFIG REQUIRED)
find_package(Boost COMPONENTS program_options REQUIRED)

add_executable(trial main.cpp)
target_link_libraries(trial PRIVATE nil::cli)