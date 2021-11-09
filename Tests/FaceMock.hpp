#pragma once

#include <gmock/gmock.h>

#include "IFace.hpp"

namespace calc
{

class FaceMock : public IFace
{
public:
    FaceMock();
    ~FaceMock();
};

}

