cmake_minimum_required(VERSION 3.16.3)
project(fonola)

set(CMKAE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/obj)

add_executable(fonola ${SOURCES})

add_custom_target(run
    COMMAND ${CMAKE_BINARY_DIR}/fonola
    DEPENDS fonola
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Executing Fonola...    "
)