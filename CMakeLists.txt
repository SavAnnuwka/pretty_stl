cmake_minimum_required(VERSION 3.6)
project(untitled37)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -stdlib=libstdc++")
#set(CMAKE_CONFIGURATION_TYPES MY CACHE STRING "MYYY" FORCE)
#set(CMAKE_BUILD_TYPES MY CACHE STRING "MYYY" FORCE)

#set (CMAKE_CXX_FLAGS "-fms-extensions" )
#set (CMAKE_C_FLAGS "-fms-extensions" )

# add_subdirectory("example (1)")
#set(CMAKE_VERBOSE_MAKEFILE TRUE)
#find_package(Boost REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})

#
FIND_PACKAGE(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})
#include <Eigen/Eigen> in main.cpp


set(SOURCE_FILES main.cpp  )
add_executable(untitled37 ${SOURCE_FILES})
#find_package(Qt5Widgets)
# target_link_libraries(untitled37 Qt5::Widgets)

#set(CMAKE_VERBOSE_MAKEFILE 1)

#target_compile_options(untitled37 PRIVATE -stdlib=libstdc++)
#set_target_properties(untitled37 PROPERTIES LINK_FLAGS -stdlib=libstdc++)