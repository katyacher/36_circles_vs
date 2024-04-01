cmake_minimum_required(VERSION 3.5.0)
project(36_circles_vs VERSION 0.1.0 LANGUAGES C CXX)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)



add_executable(36_circles_vs main.cpp  circle.cpp  circle.h )



target_link_libraries(36_circles_vs
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_INCLUDE_CURRENT_DIR ON)
include(CPack)
