cmake_minimum_required(VERSION 3.16.3)
SET(CMAKE_CXX_STANDARD 11)      

PROJECT(sudoku_validator)

FILE(GLOB_RECURSE ${PROJECT_NAME}_HEADERS
    "include/*.h"
)

ADD_EXECUTABLE(${PROJECT_NAME} ${${PROJECT_NAME}_HEADERS} src/main.cpp)

TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include 
  )
