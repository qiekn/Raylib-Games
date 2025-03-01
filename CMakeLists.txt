cmake_minimum_required(VERSION 3.10)

project(raylib-games)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# custom function
function(add_game GAME)
  add_executable(${GAME} ${ARGN})
  target_link_libraries(${GAME}
    raylib
    "-framework OpenGL"
    "-framework GLUT"
    "-framework Cocoa"
    "-framework IOKit"
    "-framework CoreVideo"
  )
endfunction()

# header files
include_directories(include)
include_directories(include/witness)

# libraries
link_directories(lib)

# targets
add_subdirectory(./src/classic)
add_subdirectory(./src/witness)
add_subdirectory(./src/pong)
add_subdirectory(./src/clock)

# generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
