cmake_minimum_required(VERSION 3.14)
project(TEMPLATE_LIB)

set(
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED YES
	CXX_EXTENSIONS NO
)

add_library(TEMPLATE_LIB STATIC
	TEMPLATE_LIB/template_lib.cpp
	include/template_lib.h
)
target_include_directories(TEMPLATE_LIB PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")



