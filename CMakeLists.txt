cmake_minimum_required(VERSION 3.30)
project(Classes_Practice)

set(CMAKE_CXX_STANDARD 20)

add_executable(Classes_Practice main.cpp
        MusicGear.cpp
        MusicGear.h
        Guitar.cpp
        Guitar.h
        Drums.cpp
        Drums.h)
