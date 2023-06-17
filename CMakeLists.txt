cmake_minimum_required(VERSION 3.20)
project(hello_c_study C)

set(CMAKE_C_STANDARD 99)

add_executable(hello_c_study main.c)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB_RECURSE files *.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()