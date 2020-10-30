cmake_minimum_required(VERSION 3.17)
project(DataBase C)

set(CMAKE_C_STANDARD 99)

add_executable(DataBaseFunc main.c DataBaseFunc/database_func.c DataBaseFunc/database_func.h CLI/parse_args.c CLI/parse_args.h string/sds.c string/sds.h string/sdsalloc.h string/testhelp.h CLI/args.h DataBaseFunc/personData.h CLI/action_func.h CLI/action_show.c CLI/action_file.c CLI/action_add.c CLI/action_func_support.h DataBaseFunc/database_IO.c DataBaseFunc/database_IO.h DataBaseFunc/database.h)