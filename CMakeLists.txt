cmake_minimum_required(VERSION 3.10)

project(QVTKTransformation)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

file(GLOB HPP_FILES "include/*.hpp")
file(GLOB CPP_FILES "src/*.cpp")
file(GLOB UI_FILES "design/*.ui")

add_executable(
  ${PROJECT_NAME}
  ${HPP_FILES}
  ${CPP_FILES}
  ${UI_FILES}
)
