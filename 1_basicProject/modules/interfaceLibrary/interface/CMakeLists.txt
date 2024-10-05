# create a interface target
add_library(interfaceLibrary INTERFACE)
# add "transitive usage requirement" for targets that whant to include this target
target_include_directories(interfaceLibrary INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
# alternatively target_include_directories(interfaceLibrary PUBLIC .)
