cmake_minimum_required(VERSION 3.10)

project(QVTKTransformation)

add_subdirectory(lib)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(VTK REQUIRED)

include_directories(
  "./include/"
)

file(GLOB HPP_FILES "include/*.hpp")
file(GLOB CPP_FILES "src/*.cpp")
file(GLOB UI_FILES "design/*.ui")
file(GLOB QRC_FILES "images/*.qrc")

add_executable(
  ${PROJECT_NAME}
  ${HPP_FILES}
  ${CPP_FILES}
  ${UI_FILES}
  ${QRC_FILES}
)

target_link_libraries(${PROJECT_NAME} PRIVATE xvtktransformation Qt${QT_VERSION_MAJOR}::Widgets ${VTK_LIBRARIES})
