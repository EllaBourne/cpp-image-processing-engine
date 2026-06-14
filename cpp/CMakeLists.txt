cmake_minimum_required(VERSION 3.15)

project(image_engine)

find_package(pybind11 REQUIRED)

pybind11_add_module(
    image_engine
    image_engine.cpp
)