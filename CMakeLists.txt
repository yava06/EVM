cmake_minimum_required(VERSION 3.15)
project(lab2)

set(CMAKE_CXX_STANDARD 11)
set(COMPUTER_SOURCE
        command.cpp command.hpp
        memory.cpp memory.hpp
        regist.cpp regist.hpp
	terminal.cpp terminal.hpp
	BigChar.cpp BigChar.hpp 
)

add_library(COMPUTER STATIC ${COMPUTER_SOURCE})

add_executable(hi hi.cpp)
target_link_libraries(hi COMPUTER)
