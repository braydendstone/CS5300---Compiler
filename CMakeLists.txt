cmake_minimum_required(VERSION 2.8)
project(cpsl)

find_package(BISON)
find_package(FLEX)

bison_target(Parser parser.y ${CMAKE_CURRENT_BINARY_DIR}/parser.cpp)
flex_target(Scanner scanner.l ${CMAKE_CURRENT_BINARY_DIR}/scanner.cpp)
add_flex_bison_dependency(Scanner Parser)

include_directories(
        ${CMAKE_CURRENT_BINARY_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}
)

set(EXTRA_COMPILE_FLAGS "-g3 -std=c++14")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${EXTRA_COMPILE_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS}")

set(cpsl_srcs
  main.cpp
  MainSpace.h
  MainSpace.cpp
  ${BISON_Parser_OUTPUTS}
  ${FLEX_Scanner_OUTPUTS}
  SymbolTable.h
  SymbolTable.cpp
  GlobalSymbolTable.cpp
  GlobalSymbolTable.h
  RegPool.cpp
  RegPool.h
  Expression.cpp
  Expression.h
  Types.cpp
  Types.h Symbol.h LValue.cpp LValue.h Function.cpp Function.h)

source_group("Calc" FILES ${cpsl_srcs})

add_executable(cpsl ${cpsl_srcs})
target_link_libraries(cpsl ${FLEX_LIBRARIES} ${BISON_LIBRARIES})

