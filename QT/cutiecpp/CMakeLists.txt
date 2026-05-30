cmake_minimum_required(VERSION 3.16)

project(cutiecpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cutiecpp main.cpp
    rectangle.h
    box.h)

include(GNUInstallDirs)
install(TARGETS cutiecpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
