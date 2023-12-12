cmake_minimum_required(VERSION 3.10.0)
project(LEETCODE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB APP_SOURCE RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cc)
foreach(filename ${APP_SOURCE})
    string(REPLACE ".cc" "" exec_name ${filename})
    add_executable(${exec_name} ${filename})
    install(TARGETS ${exec_name} DESTINATION "bin")
endforeach(filename ${APP_SOURCE})

