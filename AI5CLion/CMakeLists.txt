cmake_minimum_required(VERSION 4.1)
project(AI5CLion)

set(CMAKE_CXX_STANDARD 20)

add_executable(AI5CLion main.cpp
        rand.cpp
        rand.h
        Agent.cpp
        Agent.h)
