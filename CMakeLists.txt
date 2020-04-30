cmake_minimum_required(VERSION 3.8)
project(tidy,LANGUAGES CXX)

add_executable(tidy "")
set_property(TARGET tidy PROPERTY CXX_STANDARD 17)
set_property(TARGET tidy PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET tidy PROPERTY CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")
set(CMAKE_BUILD_TYPE Debug)
target_sources(tidy PRIVATE 
    main.cc
    )
