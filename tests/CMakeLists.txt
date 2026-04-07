// Source - https://stackoverflow.com/a
// Posted by Kroll
// Retrieved 2026-01-28, License - CC BY-SA 3.0

.....

# ADD THIS TO EXISTING TESTING CMAKELISTS
# Locate GTest
#find_package(GTest REQUIRED)
#include_directories(SYSTEM ${GTEST_INCLUDE_DIRS})
set(GTEST_SRC /usr/src/gtest/src/gtest-all.cc)
include_directories(SYSTEM /usr/src/gtest # <-- path to non-header files from gtest-all.cc
                           /usr/include)  # <-- path to gtest headers

add_library(gtest STATIC ${GTEST_SRC})    # <-- make static library target before main project executable
target_link_libraries(gtest ${CMAKE_THREAD_LIBS_INIT})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(tests ${SRC})
target_link_libraries(tests ${Boost_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT} gtest) # <-- finaly link this library as others
