set(ENABLE_TEST OFF CACHE BOOL "[0 | OFF - 1 | ON]: build tests?")

function(add_test_subdirectory DIRECTORY)
    if(ENABLE_TEST)
        add_subdirectory(${DIRECTORY})
    endif()
endfunction()

if(ENABLE_TEST)
    set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)
    find_package(GTest CONFIG REQUIRED)
    include(CTest)
endif()