cmake_minimum_required(VERSION 3.1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project (demo)
set(SRC
    MyThread.cpp
    detect.cpp
    main.cpp
    piano.cpp
)
find_package (OpenCV REQUIRED)
find_package (Threads)
add_executable(demo ${SRC})

target_link_libraries(demo ${OpenCV_LIBS})
target_link_libraries(demo ${CMAKE_THREAD_LIBS_INIT})
