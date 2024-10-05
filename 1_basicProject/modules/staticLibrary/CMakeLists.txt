# create a static target
add_library(staticLibrary STATIC statLib.cpp)
# add "transitive usage requirement" for targets that whant to include this target
target_include_directories(staticLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# alternatively target_include_directories(staticLibrary PUBLIC .)