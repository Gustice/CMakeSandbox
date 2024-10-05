#pragma once

enum OpStatus
{
    Invalid,
    Initialized,
    Running,
};

OpStatus Shr_InitCore();
OpStatus Shr_StartCore();