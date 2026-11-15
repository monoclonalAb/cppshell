cmake_minimum_required(VERSION 4.4.2)
project(cppshell CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # for clangd / nvim

# add library support
add_library(cppcore)
target_sources(cppcore
  PRIVATE
    src/shell.cpp
  
  PUBLIC
    FILE_SET HEADERS
    # TYPE HEADERS
    BASE_DIRS
      include
    FILES
      include/shell.hpp
)
target_compile_features(cppcore PUBLIC cxx_std_23)
target_compile_options(cppcore PRIVATE -Wall -Wextra -Wpedantic)

# create executable
add_executable(cppshell)
target_sources(cppshell
  PRIVATE
    src/main.cpp
)
target_link_libraries(cppshell
  PRIVATE
    cppcore
)
target_compile_options(cppshell PRIVATE -Wall -Wextra -Wpedantic)

# tests
