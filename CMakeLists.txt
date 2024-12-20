cmake_minimum_required(VERSION 3.10)
project(GeometricLibraries)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)

# Статическая библиотека
add_library(geometric_calculations_static STATIC 
    geometric_calculations.cpp
)
target_include_directories(geometric_calculations_static PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Динамическая библиотека
add_library(geometric_shapes SHARED 
    geometric_shapes.cpp
)
target_include_directories(geometric_shapes PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Библиотека с пространством имен
add_library(geometry_namespace STATIC
    geometry_namespace.cpp
)
target_include_directories(geometry_namespace PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)
