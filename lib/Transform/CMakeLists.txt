project(VTKTRANSFORMATION)

find_package(VTK REQUIRED)

file(GLOB CPP_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB HPP_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp)

add_library(xvtktransformation SHARED
  ${CPP_FILES}
  ${HPP_FILES}
)
