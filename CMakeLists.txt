# Copyright 2023 Klepsydra Technologies AG
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

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
