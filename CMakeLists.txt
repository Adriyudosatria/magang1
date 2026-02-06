cmake_minimum_required(VERSION 3.22.1)

project(magang1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(magang1
    src/main.cpp
    src/CsvHandler.cpp
    src/Length.cpp
    src/Temperature.cpp
    src/Time.cpp
    src/Json.Handler.cpp
)

target_include_directories(magang1 PRIVATE include)
