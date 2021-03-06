# <p align="center">The-intouchable-instruments</p>
<div align="center">
    <img align="center" src="files/logo.GIF">
    <p align="center" >A QT GUI application of Intouchable instruments</p>
    <hr/>

</div>

<br>

## <p align="center">Publishing platforms</p>
<div align="center">
    <a href="https://youtu.be/L8Uz_gjlirM https://twitter.com/ppc1112345/status/1516460707834966017?s=20&t=ULfdEZPvhGr8-wSA55PxEQ">Youtube</a>
    &emsp;&emsp;
    <a href="https://www.facebook.com/100006301512966/videos/554006359379729/">Facebook</a>
    &emsp;&emsp;
    <a href="https://mobile.twitter.com/ppc1112345/status/1516460707834966017?s=20&t=ULfdEZPvhGr8-wSA55PxEQ">Twitter</a>
</div>

<br>

## <p align="center">Documentation</p>
<div align="center">
<a href="tree.txt">documentation_files_tree</a>
</div>

<br>

## <p align="left">Contents</p>
####  &emsp;&emsp;1. About project
####  &emsp;&emsp;2. Functions
####  &emsp;&emsp;3. Equipment preparation
####  &emsp;&emsp;4. Project process
####  &emsp;&emsp;5. QT develop
####  &emsp;&emsp;6. Cmake project develop
####  &emsp;&emsp;7. Future work



<br>
<br>


## <p align="left">(1) &emsp;About project</p>
##### &emsp;&emsp;The-intouchable-instruments is a project that recognizes and captures gestures within a form and translates them into scales, and can play musical instruments such as the piano to complete real-time interaction with the user based on the user's actions.

<br>

## <p align="left">(2) &emsp;Functions</p>
#####     &emsp;&emsp;a) &emsp;After the project is running, the seven areas to be recognized in the display screen will be divided into seven scales of music, and the gestures will be able to recognize and respond to the corresponding notes after crossing the corresponding areas.
#####     &emsp;&emsp;b) &emsp;Users independently choose to open the recognition task or pause the recognition task, and later can choose different musical instruments as the result output.

<br>

## <p align="left">(3) &emsp;Equipment preparation</p>
#####     &emsp;&emsp;a) &emsp;Model: Raspberry Pi 3B+
#####     &emsp;&emsp;b) &emsp;Usb interface camera
#####     &emsp;&emsp;c) &emsp;Usb audio playback adapter
#####     &emsp;&emsp;d) &emsp;Memory card

<br>

## <p align="left">(4) &emsp;Project process</p>
#####     &emsp;&emsp;a) &emsp;Debugging and configuration of Raspberry Pi
#####         &emsp;&emsp;Download of the system: https://www.raspberrypi.org/downloads/raspbian/ 
#####     &emsp;&emsp;b) &emsp;System initialization
#####         &emsp;&emsp;&emsp;&emsp;i. &emsp;Open ssh connection to turn on the ssh function and set up the network connection.
#####         &emsp;&emsp;&emsp;&emsp;ii. &emsp;Use the sudo raspi-config command in the terminal to enter the configuration interface to enable VNC service and configure vnc startup items.
#####         &emsp;&emsp;&emsp;&emsp;iii. &emsp;Change the version software source.
#####     &emsp;&emsp;c) &emsp;OpenCV
##### &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;Installation in Linux
```
    # Install minimal prerequisites (Ubuntu 18.04 as reference)
    sudo apt update && sudo apt install -y cmake g++ wget unzip
    # Download and unpack sources
    wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
    unzip opencv.zip
    # Create build directory
    mkdir -p build && cd build
    # Configure
    cmake  ../opencv-4.x
    # Build
    cmake --build .
    #install
    sudo make install
```

#####     &emsp;&emsp;d) &emsp;Configuring and Publishing Git Projects
#####         &emsp;&emsp;&emsp;&emsp;i. &emsp;Create a git repository and clone it locally: 
```
    git clone https://github.com/ppc12345/The-intouchable-instruments.git
```
#####         &emsp;&emsp;&emsp;&emsp;ii. &emsp;Different branches were created for uploading and versioning different features and project modules, and will be integrated into the master branch.
#####     &emsp;&emsp;e) &emsp;Project running and debugging
#####         &emsp;&emsp;&emsp;&emsp;i. &emsp;Compiling and running the released version of the project using the command line will be supported.
```
    mkdir build
    cd build
    cmake ...
    make
    ./demo
    #Execute the following command line for unit testing
    make test
```

<br>

## <p align="left">(5) &emsp;QT Development</p>
#####     &emsp;&emsp;a) &emsp;QT development version: QT 5.9.9
#####     &emsp;&emsp;b) &emsp;Create qt project based on cmake project
#####     &emsp;&emsp;c) &emsp;Configure compilation environment
```
    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    target_link_libraries(demo Qt5::Widgets ${OpenCV_LIBRARIES})
```
#####     &emsp;&emsp;d) &emsp;Interface development.
#####     &emsp;&emsp;e) &emsp;Use controls to build the architecture of the front-end display interface, and use springs and grid layout to complete the orderly layout of controls.
#####     &emsp;&emsp;f) &emsp;Write style sheets and optimize UI items in mainwindow.cpp.
#####     &emsp;&emsp;g) &emsp;Use a library of functions that point to control objects to complete the parameter pointing.
#####     &emsp;&emsp;h) &emsp;Create utils.cpp, utils.h to convert video stream in Mat format to Qimage format and use setPixmap method to get the frame image of the video.
```
    namespace futils{
        QImage cvmat_to_qimage(const cv::Mat& mat);
    }
```
```
    namespace futils{
        QImage cvmat_to_qimage(const cv::Mat& mat){
            QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
            return image;
        }
    }
```
#####     &emsp;&emsp;j) &emsp;Write timer function to synchronize the output video to refresh and display in lbel control body and replace opencv adaptive form structure.

<br>

## <p align="left">(6) &emsp;Project integration</p>
#####     &emsp;&emsp;Modify the cmakelists.txt file and main.cpp file to integrate the QT project with the Cmake project to finish synchronizing the video stream and displaying it. Some parts available for modification???Different length of display music at folder 'audio'. User can change code at piano.cpp to choose suitable wav files. Name of wav file is xX.wav, x means length(2 is 0.2s, 3 is 0.3s) and X means scale(A means do, B means re).

<br>

## <p align="left">(7) &emsp;Cmake project development</p>
#####     &emsp;&emsp;All the links of package and code file are made by CMake. 
CmakeLists.txt in main folder
```
    cmake_minimum_required(VERSION 3.1.0)  //version of cmake
    project (demo)                         //name of project
    add_subdirectory(test)                 //add sub folder
    enable_testing()
    ...
    
    set(SRC                                //SRC is a define of executable files(source code)
        src/MyThread.cpp
        src/detect.cpp
        src/main.cpp
        ...    
        )

    find_package (OpenCV REQUIRED)         //required package
    find_package (Threads)
    ...
        
    add_executable(demo ${SRC})            //add path of source code
    add_test(NAME ThreadTest COMMAND THREAD_TEST)   //add test
        
    target_link_libraries(demo ${OpenCV_LIBS})    //link libraries
    ...
```

CmakeLists.txt in test folder
```
    find_package (Boost COMPONENTS unit_test_framework REQUIRED)
    include_directories (${demo_SOURCE_DIR}/src
                        ${Boost_INCLUDE_DIRS}
                        )
    add_definitions (-DBOOST_TEST_DYN_LINK)

    add_executable(THREAD_TEST ThTest.cpp)   //add test code
    target_link_libraries (THREAD_TEST       //link libraries
                            thread
                            ${CMAKE_THREAD_LIB_INIT}
                            ${Boost_FILESYSTEM_LIBRARY}
                            ${Boost_SYSTEM_LIBRARY}
                            ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                            )
    ...
```

<br>

## <p align="left">(8) &emsp;Future Outlook</p>
#####     &emsp;&emsp;The project is a human-centered real-time gesture recognition project, in the future, the project team will focus on user feedback and improve the interaction effect of the project according to the positive feedback to enhance user friendliness, based on this, the project will do version upgrades in the following aspects.
#####     &emsp;&emsp;a) &emsp;In the initial version of the project, the default instrument is piano. In the future, with the improvement of the project and the steady progress of the development, users will be able to choose different instruments to demonstrate the results, and according to the recognized scales, they can complete the creation and performance of the tracks.
#####     &emsp;&emsp;b) &emsp;Improvement of recognition. In the latest version released, the recognition accuracy has been able to meet the basic needs, although in complex environments, the recognition accuracy varies slightly, but still within the confidence interval. In the future, the project team will upgrade the recognition accuracy and response timeliness.
#####     &emsp;&emsp;c) &emsp;Optimization of result output, currently the traditional QT interface is used to complete the result output. In order to improve the market response after the release of the project, we will consider optimizing the simulation of real instrument keys, such as the black and white keys of piano and the plucking effect of guitar strings, as well as adding chromatic scale recognition to improve the operation experience of virtual instruments more realistically.

<br>

### References:
##### &emsp;&emsp;&emsp;&emsp;https://docs.opencv.org/4.5.5/d7/d9f/tutorial_linux_install.html (opencv install guide)
##### &emsp;&emsp;&emsp;&emsp;https://blog.csdn.net/ZOROE123/article/details/122663057
##### &emsp;&emsp;&emsp;&emsp;https://cmake.org/cmake/help/latest/manual/cmake-qt.7.html
##### &emsp;&emsp;&emsp;&emsp;https://www.kitware.com/commercial/#books
