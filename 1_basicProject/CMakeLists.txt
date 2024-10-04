cmake_minimum_required(VERSION 3.16)

project(BasicProj VERSION 1.0)

# todo 
# CMAKE_MESSAGE_CONTEXT
# CMAKE_BUILD_PARALLEL_LEVEL
# CMAKE_VERBOSE_MAKEFILE

set(CXX_STANDARD 20)
set(EXPORT_COMPILE_COMMANDS ON)

# Option can be set in GUI or by command-Line cmake ../proj -DUSE_FLAG=ON
option(USE_FLAG "Use some arbitrary flag to demonstrate configuration" ON)
set(USE_FLAG ON) # Option is directly set for demo purpose 

if(USE_FLAG) # Confitional cMake statements
    message("## USE_FLAG is defiened")
endif()

set(MyString "DemoProject")
set(MyNumber 123)

# add the executable -> Later "BasicProj.exe"
add_executable(BasicProj main.cpp)
# defines config-source file and output name (output will be written in binary-Tree)
configure_file(Config.h.in Config.h) # @..@ Variables will be replaced

add_subdirectory(modules)
# include directory of binary-dir in order to make configfile-output visible
target_include_directories(BasicProj PUBLIC 
                ${PROJECT_BINARY_DIR} # Add Root (Config File is placed here)
                )

target_link_libraries(BasicProj PRIVATE 
    staticLibrary
)