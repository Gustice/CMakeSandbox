# create a static target
add_library(objectLibrary OBJECT objectArt.cpp)
# add "transitive usage requirement" for targets that whant to include this target
target_include_directories(objectLibrary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
# alternatively target_include_directories(objectLibrary PRIVATE .)

target_compile_definitions(objectLibrary PRIVATE INIT_VAL=10)