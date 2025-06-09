find_package(nil-xit-test CONFIG REQUIRED COMPONENTS gtest)

add_library(SUT INTERFACE Circle.hpp)

# Step 1: Basic GTest - no groups needed
add_test_executable(step_1 step_1.cpp)
target_link_libraries(step_1 PRIVATE SUT)
target_link_libraries(step_1 PRIVATE nil::xit-gtest)

# Step 2: Basic xit-test - no groups needed
add_xit_test(step_2 
    SOURCES step_2.cpp
    GROUPS "group=${CMAKE_CURRENT_SOURCE_DIR}"
)
target_link_libraries(step_2 PRIVATE SUT)
target_link_libraries(step_2 PRIVATE nil::xit-gtest)

# Step 3: Visual testing with output frame - needs group for Svelte files
add_xit_test(step_3 
    SOURCES step_3.cpp
    GROUPS "group=${CMAKE_CURRENT_SOURCE_DIR}"
)
target_link_libraries(step_3 PRIVATE SUT)
target_link_libraries(step_3 PRIVATE nil::xit-gtest)

# Step 4: Visual testing with input and output frames - needs group for Svelte files
add_xit_test(step_4 
    SOURCES step_4.cpp
    GROUPS "group=${CMAKE_CURRENT_SOURCE_DIR}"
)
target_link_libraries(step_4 PRIVATE SUT)
target_link_libraries(step_4 PRIVATE nil::xit-gtest)

# Step 5: File persistence testing - needs group for Svelte files and input file
add_xit_test(step_5 
    SOURCES step_5.cpp
    GROUPS "group=${CMAKE_CURRENT_SOURCE_DIR}"
)
target_link_libraries(step_5 PRIVATE SUT)
target_link_libraries(step_5 PRIVATE nil::xit-gtest)