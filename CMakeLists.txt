cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Game.cpp Game.h Entity.cpp Entity.h Player.cpp Player.h)
target_link_libraries(untitled -lsfml-graphics -lsfml-window -lsfml-system)
