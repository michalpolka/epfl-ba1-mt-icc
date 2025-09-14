cmake_minimum_required(VERSION 4.0)
project(epfl_ba1_mt_icc)

set(CMAKE_CXX_STANDARD 26)

add_executable(epfl_ba1_mt_icc welcome.cpp
        module-1/1-variables.cpp
        module-1/2-io.cpp
        module-1/3-operators.cpp
        module-1/ex1-captains-age.cpp
        module-1/ex2-fondue.cpp
        module-1/ex3-basic-maths.cpp
        module-1/as1_1-hello-world.cpp
        module-1/as1_2-swapping-values.cpp
)
