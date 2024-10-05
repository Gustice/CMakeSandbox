#pragma once

#include "interfaceLib.hpp"

class IntImpl : public IInt
{
public:
    void doSome() override;
};