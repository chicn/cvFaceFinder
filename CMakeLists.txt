cmake_minimum_required(VERSION 3.7)
project(cvFaceFinder)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp FaceDetector.cpp FaceDetector.h)
add_executable(cvFaceFinder ${SOURCE_FILES})

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(cvFaceFinder ${OpenCV_LIBS})