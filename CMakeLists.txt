cmake_minimum_required(VERSION 3.1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project (demo)
set(SRC
    MyThread.cpp
    detect.cpp
    main.cpp)
add_executable(demo ${SRC})
find_package (Threads)
find_package (OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
target_link_libraries (demo ${OpenCV_LIBS})
target_link_libraries (demo ${CMAKE_THREAD_LIBS_INIT})
