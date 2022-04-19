cmake_minimum_required(VERSION 3.1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project (demo)

set(OpenCV_DIR /home/pi/build)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

include_directories(${OpenCV_DIR}/include)
link_directories(${OpenCV_DIR}/lib)

add_subdirectory(test)
enable_testing()

set(SRC
    src/MyThread.cpp
    src/detect.cpp
    src/main.cpp
    src/utils.cpp
    src/piano.cpp
    src/mainwindow.cpp
    src/global.cpp
    
)
find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package (OpenCV REQUIRED)
find_package (Threads)
add_executable(demo ${SRC})

add_library(thread src/CppThread.h)

add_test(NAME ThreadTest COMMAND THREAD_TEST)

target_link_libraries(demo ${OpenCV_LIBS})
target_link_libraries(demo ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(demo Qt5::Widgets ${OpenCV_LIBRARIES})
