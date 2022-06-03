cmake_minimum_required(VERSION 3.16)

project(eight088 C)
set(C_STANDARD 99)

add_library(${PROJECT_NAME}
    src/eight088.c
    src/cpu.c
)

target_include_directories(${PROJECT_NAME} PUBLIC include)