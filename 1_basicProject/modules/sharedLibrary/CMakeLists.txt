# create a shared target
add_library(sharedLibrary SHARED sharedLib.cpp util.cpp)
# add "transitive usage requirement" for targets that whant to include this target
target_include_directories(sharedLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
# NOTE this enables main project to include this library as simple as a static lib
#   no copy operation is neccessary