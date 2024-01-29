cmake_minimum_required(VERSION 3.27)
project(wrestling_journey)

set(CMAKE_CXX_STANDARD 17)

add_executable(wrestling_journey main.cpp
        wrestler.cpp
        wrestler.h
        faction.cpp
        faction.h
        manager.cpp
        manager.h
)
