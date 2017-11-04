cmake_minimum_required(VERSION 2.8.12)
project(char_struct_bug)

add_subdirectory(pybind11)
pybind11_add_module(char_struct_bug src/main.cpp)
