add_executable(MyTests processTest.cpp testMain.cpp)
target_link_libraries(MyTests PRIVATE
    gtest gmock
    #MainFrameComponent 
)

add_test( NAME MyTests COMMAND MyTests )