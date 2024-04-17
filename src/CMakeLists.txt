project(main)

find_package(nil-gate CONFIG REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE nil::gate)
# add_library
# target_compile_definitions
# target_compile_features
# target_compile_options
# target_link_directories
# target_link_libraries
# target_link_options
# target_include_directories
# target_sources
# find_program
# add_subdirectory