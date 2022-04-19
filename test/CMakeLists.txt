find_package (Boost COMPONENTS unit_test_framework REQUIRED)
include_directories (${demo_SOURCE_DIR}/src
                    ${Boost_INCLUDE_DIRS}
                    )
add_definitions (-DBOOST_TEST_DYN_LINK)

add_executable(THREAD_TEST ThTest.cpp)
target_link_libraries (THREAD_TEST
                        thread
                        ${CMAKE_THREAD_LIB_INIT}
                        ${Boost_FILESYSTEM_LIBRARY}
                        ${Boost_SYSTEM_LIBRARY}
                        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                        )
