cmake_minimum_required(VERSION 3.15)
project(C C)

set(CMAKE_C_STANDARD 99)
# Hello World
add_executable(C main.c)

# 基础
add_executable(test01 bianliang/test01.c)
add_executable(test02 bianliang/test02.c)
add_executable(test03 bianliang/test03.c)


# 数据结构
add_executable(LinearTable DataStructure/1_LinearTable.c)
