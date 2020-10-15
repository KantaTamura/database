cmake_minimum_required(VERSION 3.17)
project(database C)

set(CMAKE_C_STANDARD 99)

add_executable(database main.c DataBase/database.c DataBase/database.h CLI/parse_args.c CLI/parse_args.h string/sds.c string/sds.h string/sdsalloc.h string/testhelp.h CLI/args.h DataBase/personData.h)