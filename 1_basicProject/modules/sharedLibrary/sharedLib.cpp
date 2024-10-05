#include "util.hpp"
#include "sharedLib.hpp"

#include <stdio.h>

OpStatus Shr_InitCore(){
    printf("    ## DynLib: Shared initialized \n");
    return OpStatus::Initialized;
}

OpStatus Shr_StartCore(){
    printf("    ## DynLib: Core stated \n");
    int num = Util_GenNumber();
    if (num >= 0) {
        return OpStatus::Initialized;
    }
    
    return OpStatus::Invalid;
}