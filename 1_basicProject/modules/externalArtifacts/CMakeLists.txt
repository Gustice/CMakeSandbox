# make sure the faked external library
set(pathToExternalDir ${CMAKE_CURRENT_LIST_DIR}/../../externals/fakedExtern)

add_custom_command(
    OUTPUT ${pathToExternalDir}/externLib.a
    COMMAND make asStatic 
    WORKING_DIRECTORY ${pathToExternalDir}
)
add_custom_target(run_if_external_is_missing ALL
    DEPENDS ${pathToExternalDir}/externLib.a
)

# create a reference to an external build library
add_library(externLibraryRef STATIC IMPORTED GLOBAL)
# NOTE the library is considerd a inteface internally
set_target_properties(externLibraryRef PROPERTIES
    IMPORTED_LOCATION ${pathToExternalDir}/externLib.a
    INTERFACE_INCLUDE_DIRECTORIES ${pathToExternalDir} # target_include_directories fails to add this entry
)

#[=[ WORKAROUND: 
    # create interface to be able to propagate properties
    add_library(externLibrary INTERFACE)
    target_include_directories(externLibrary INTERFACE
        ${pathToExternalDir}
    )
    target_link_libraries(externLibrary INTERFACE externLibraryRef)
]=]
