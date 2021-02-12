cmake_minimum_required(VERSION 3.19)
project(pmem)

set(CMAKE_CXX_STANDARD 14)

set(libsrc src/pmem.h src/pmem.cc)

if (type STREQUAL "shared" OR type STREQUAL "dynamic")
    add_library(${CMAKE_PROJECT_NAME} SHARED ${libsrc})
else ()
    add_library(${CMAKE_PROJECT_NAME} ${libsrc})
endif ()
