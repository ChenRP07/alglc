cmake_minimum_required(VERSION 3.22.0)
project(alglc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_COMMANDS_EXPORT_DIRECTORY ${CMAKE_SOURCE_DIR})

include_directories(${CMAKE_SOURCE_DIR})
file(COPY build/compile_commands.json DESTINATION ${CMAKE_SOURCE_DIR})

add_subdirectory(src)
