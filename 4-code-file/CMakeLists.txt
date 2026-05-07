cmake_minimum_required(VERSION 3.10)

project(MyTestProject)

set(SRC 
    main.cpp
    my-library.cpp
) 

add_executable(MyTestProject ${SRC})
