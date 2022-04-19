# The-intouchable-instruments

  ### Contents
####  1. About project
####  2. Functions
####  3. Equipment preparation
####  4. Project process
####  5. QT develop
####  6. Cmake project develop
####  7. Future work





#### (1) About project
##### The-intouchable-instruments is a project that recognizes and captures gestures within a form and translates them into scales, and can play musical instruments such as the piano to complete real-time interaction with the user based on the user's actions.

#### (2) Functions
#####     a) After the project is running, the seven areas to be recognized in the display screen will be divided into seven scales of music, and the gestures will be able to recognize and respond to the corresponding notes after crossing the corresponding areas.
#####     b) Users independently choose to open the recognition task or pause the recognition task, and later can choose different musical instruments as the result output.

#### (3) Equipment preparation
#####     a) Model: Raspberry Pi 3B+
#####     b) Usb interface camera
#####     c) Usb audio playback adapter
#####     d) Memory card

#### (4) Project process
#####     a) Debugging and configuration of Raspberry Pi
#####         Download of the system: https://www.raspberrypi.org/downloads/raspbian/ to 
#####     b) System initialization
#####         i. Open ssh connection to turn on the ssh function and set up the network connection.
#####         ii. Use the sudo raspi-config command in the terminal to enter the configuration interface to enable VNC service and configure vnc startup items.
#####         iii. Change the version software source.
#####     c) 依赖项与模块的安装
#####        （列出安装的依赖项与安装的模块）
#####     d) Configuring and Publishing Git Projects
#####         i. Create a git repository and clone it locally: git clone https://github.com/ppc12345/The-intouchable-instruments.git
#####         ii. Different branches were created for uploading and versioning different features and project modules, and will be integrated into the master branch.
#####     e) Project running and debugging
#####         i. Compiling and running the released version of the project using the command line will be supported.
#####            cd build
#####            cmake ...
#####            make
#####            ./demo
#####         ii. Execute the following command line for unit testing
#####            make test

#### (5) QT Development
#####     a) QT development version: QT 5.9.9
#####     b) Create qt project based on cmake project
#####     c) Configure compilation environment
#####     d) Interface development.
#####     e) Use controls to build the architecture of the front-end display interface, and use springs and grid layout to complete the orderly layout of controls.
#####     f) Write style sheets and optimize UI items in mainwindow.cpp.
#####     g) Use a library of functions that point to control objects to complete the parameter pointing.
#####     h) Create utils.cpp, utils.h to convert video stream in Mat format to Qimage format and use setPixmap method to get the frame image of the video.
#####     j) Write timer function to synchronize the output video to refresh and display in lbel control body and replace opencv adaptive form structure.

#### (6) Project integration
#####     Modify the cmakelists.txt file and main.cpp file to integrate the QT project with the Cmake project to finish synchronizing the video stream and displaying it.

#### (7) Cmake project development
#####     （数据处理思想）

#### (8）Future Outlook
#####     The project is a human-centered real-time gesture recognition project, in the future, the project team will focus on user feedback and improve the interaction effect of the project according to the positive feedback to enhance user friendliness, based on this, the project will do version upgrades in the following aspects.
#####     a) In the initial version of the project, the default instrument is piano. In the future, with the improvement of the project and the steady progress of the development, users will be able to choose different instruments to demonstrate the results, and according to the recognized scales, they can complete the creation and performance of the tracks.
#####     b) Improvement of recognition. In the latest version released, the recognition accuracy has been able to meet the basic needs, although in complex environments, the recognition accuracy varies slightly, but still within the confidence interval. In the future, the project team will upgrade the recognition accuracy and response timeliness.
#####     c) Optimization of result output, currently the traditional QT interface is used to complete the result output. In order to improve the market response after the release of the project, we will consider optimizing the simulation of real instrument keys, such as the black and white keys of piano and the plucking effect of guitar strings, as well as adding chromatic scale recognition to improve the operation experience of virtual instruments more realistically.

