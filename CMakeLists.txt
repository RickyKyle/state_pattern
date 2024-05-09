cmake_minimum_required(VERSION 3.22)
project(state_pattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(state_pattern main.cpp
                             context.cpp
                             state_idle.cpp
                             state_base.cpp
                             state_awaiting_coins.cpp)

