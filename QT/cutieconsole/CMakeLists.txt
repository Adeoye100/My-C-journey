cmake_minimum_required(VERSION 3.19)
project(cutieconsole LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(cutieconsole
    main_01.cpp

)

target_link_libraries(cutieconsole
    PRIVATE
        Qt6::Core
)

install(TARGETS cutieconsole
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)