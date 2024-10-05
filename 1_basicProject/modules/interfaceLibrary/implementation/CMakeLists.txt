# create a static target
add_library(interfaceImplementation STATIC interfaceImplLib.cpp)
# add "transitive usage requirement" for targets that whant to include this target
target_include_directories(interfaceImplementation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# alternatively target_include_directories(interfaceImplementation PUBLIC .)

target_link_libraries(interfaceImplementation PUBLIC 
    interfaceLibrary
)