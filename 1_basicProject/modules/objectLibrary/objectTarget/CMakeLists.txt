# create a static target
add_library(objectUsedLibrary STATIC objectLib.cpp)
# add "transitive usage requirement" for targets that whant to include this target
target_include_directories(objectUsedLibrary 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ../objectArtifacts
)

target_link_libraries(objectUsedLibrary PRIVATE 
    $<TARGET_OBJECTS:objectLibrary>
)