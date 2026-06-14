cmake_minimum_required(VERSION 3.15)

project(image_engine)

find_package(pybind11 REQUIRED)
find_package(OpenCV REQUIRED)

pybind11_add_module(
    image_engine
    image_engine.cpp
)

target_link_libraries(
    image_engine
    PRIVATE
    ${OpenCV_LIBS}
)