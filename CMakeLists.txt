cmake_minimum_required(VERSION 3.16)
project(DataStructure)

set(CMAKE_CXX_STANDARD 98)

# 遍历项目根目录下所有的 .cpp 文件
#file (GLOB files *.cpp)
# 官方提供了一种递归的方法
# 这样在运行框会多一个 CMakeCXXCompilerId，不过无伤大雅
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file} C-basis/Basis/basis.cpp C-basis/ControlFlow/controlAndFlow.cpp C-basis/FunctionAndPrograms/functionAndPrograms.cpp C-basis/PointersAndArrays/pointersAndArrays.cpp C-basis/StructureAndClass/structureAndClass.cpp C-basis/TypeAndOperation/typeAndOperation.cpp)
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()