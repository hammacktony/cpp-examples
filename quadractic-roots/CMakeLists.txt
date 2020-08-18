# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(quadratic-roots)

# Testing
include(CTest)
enable_testing()

# creates the variable EXEC and sets it to executable name
set(EXEC rootsolver)

# set the C++14 standard
set(CMAKE_CXX_STANDARD 14)

# I../includes
include_directories(.)

# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES src/*.cpp)

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)