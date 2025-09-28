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
        module-2/1-if-statement.cpp
        module-2/2-logical-operators.cpp
        module-2/3-boolean.cpp
        module-2/ex4-conditional-expressions.cpp
        module-2/ex5-conditional-expressions.cpp
        module-2/ex6-arithmetic-expressions.cpp
        module-2/as-2_1-bike-rental.cpp
        module-2/as-2_2-shrooms.cpp
        module-3/1-for-loops.cpp
        module-3/2-while-loops.cpp
        module-3/ex7-multiplication-tables.cpp
        module-3/ex8-ball-bounce.cpp
        module-3/ex9-ball-bouncier.cpp
        module-3/ex10-prime-numbers.cpp
        module-3/as-3_1-number-game.cpp
        "module-3/as-3_2-predators-and-prey-(uwu).cpp"
)
