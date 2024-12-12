cmake_minimum_required(VERSION 3.20)

project(udrm VERSION 0.0.1 LANGUAGES C)
set(CMAKE_C_STANDARD 11)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

add_library(udrm STATIC)
add_subdirectory(src/common)

if(NOT DEFINED DISABLE_DRIVER_XE)
	add_subdirectory(src/xe)
	target_link_libraries(udrm_driver_xe PRIVATE udrm)
endif()
