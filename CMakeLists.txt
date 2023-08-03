cmake_minimum_required(VERSION 3.10)
project(ProjectEulerSolutions)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(include)

set(level 31)
#add_subdirectory(Problem${level})
add_subdirectory(Template)

add_executable(Solution
    src/main.cpp
)
target_link_libraries(Solution
    ProblemSolution
)