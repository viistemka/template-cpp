cmake_minimum_required(VERSION 3.14)
project(TestSetup VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

add_subdirectory(tests)
add_subdirectory(thirdParty)
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include/")

add_executable(${PROJECT_NAME} "src/main.cpp" "include/template_namespace.h")
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")
target_link_libraries(${PROJECT_NAME} PRIVATE TEMPLATE_LIB gamedev)