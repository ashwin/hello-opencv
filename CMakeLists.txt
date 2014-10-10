cmake_minimum_required(VERSION 2.8)

set(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_HOME_DIRECTORY}/bin
    )

set(
    OPENCV_LIBS
    -lopencv_contrib
    -lopencv_core
    -lopencv_highgui
    -lopencv_imgproc
    -lopencv_legacy
    )

add_executable(
    hello-opencv
    src/main.cpp
    src/img.cpp
    )

target_include_directories(
    hello-opencv PUBLIC
    src
    )

target_link_libraries(
    hello-opencv
    ${OPENCV_LIBS}
    )
