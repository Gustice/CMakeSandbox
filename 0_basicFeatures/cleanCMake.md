# Clean code in CMake

## Top down structure

To avoid that the most toplevel part appears at the end you can place the 
algorithm in a macro that is called finally. On the actual call of the macro all 
prerequisites are defined but the top level approach is still visible at 
beginning

```cmake
macro(main)
    firstStep()
    secondStep()
endmacro()

function(firstStep)
    ...
endfunction()
function(secondStep)
    ...
endfunction()

main() # actual call 
```

