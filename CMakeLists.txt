cmake_minimum_required(VERSION 3.17)
project(BattagliaNavale C)

set(CMAKE_C_STANDARD 99)

add_executable(BattagliaNavale main.c game_constr.h game_functions.c gen_utils.h gen_utils.c graphics.h game_functions.h graphics.c
        costants.h)
