cmake_minimum_required(VERSION 3.10)

project(witness)
set(TARGET_NAME demo)
set(CMAKE_CXX_STANDARD 17)

aux_source_directory(src/witness DIR_SRCS)

include_directories(include)
include_directories(include/witness)

link_directories(lib)

# Add the executable
add_executable(${TARGET_NAME} ${DIR_SRCS})

target_link_libraries(${TARGET_NAME}
  raylib
  "-framework OpenGL"
  "-framework GLUT"
  "-framework Cocoa"
  "-framework IOKit"
  "-framework CoreVideo"
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
