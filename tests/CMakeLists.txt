set(BUILD_TESTING ON)
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../include/")

if(BUILD_TESTING)
    # ADD THIS TO EXISTING TESTING CMAKELISTS
    # Locate GTest
    #find_package(GTest REQUIRED)
    #include_directories(SYSTEM ${GTEST_INCLUDE_DIRS})
# Testy
# Wymuœ zgodne CRT dla MSVC
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    add_executable(${PROJECT_NAME}_tests "test_example.cpp")
    target_include_directories(${PROJECT_NAME}_tests PRIVATE "$../include/")
    target_link_libraries(${PROJECT_NAME}_tests PRIVATE GTest::gtest_main TEMPLATE_LIB)

    include(GoogleTest)
    gtest_discover_tests(${PROJECT_NAME}_tests)

endif()