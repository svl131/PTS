cmake_minimum_required(VERSION 3.0)

project(PatternProject CXX)

include_directories("./include")

add_executable(main
  src/main.cpp
  src/Factory.cpp
  src/Decorator.cpp
  include/Factory.h
  include/Decorator.h
)
