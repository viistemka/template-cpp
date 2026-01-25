cmake_minimum_required(VERSION 3.14)
project(MyProject VERSION 1.0 LANGUAGES CXX)

set(PROJECT_NAME MyProject)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

enable_testing()
include(FetchContent)

# Pobierz i udostêpnij googletest
FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG v1.15.1
)
# Wymuœ zgodne CRT dla MSVC
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(thirdParty/TEMPLATE_LIB)

add_executable(${PROJECT_NAME} "src/main.cpp")
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")
target_link_libraries(${PROJECT_NAME} PRIVATE TEMPLATE_LIB)

# Testy
add_executable(${PROJECT_NAME}_tests "tests/test_example.cpp")
target_include_directories(${PROJECT_NAME}_tests PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include/")
target_link_libraries(${PROJECT_NAME}_tests PRIVATE GTest::gtest_main TEMPLATE_LIB)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_tests)