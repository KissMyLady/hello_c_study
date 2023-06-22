cmake_minimum_required(VERSION 3.20)
project(hello_c_study C)

set(CMAKE_C_STANDARD 99)


if(WIN32)
    # set console codepage to UTF-8 in Windows
    # set project encoding to UTF-8
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=UTF-8")
    # add_compile_options(-finput-charset=UTF-8 -fexec-charset=UTF-8)
endif()


# 中文配置
#set(count 1)
## 遍历项目根目录下所有的 .cpp 文件
#file (GLOB_RECURSE files *.c)
#foreach (file ${files})
#    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
#    add_executable (output_${count} ${file})
#    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/output_${count})
#    math(EXPR count "${count}+1")
#endforeach ()

# 正常配置
file (GLOB_RECURSE files *.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
