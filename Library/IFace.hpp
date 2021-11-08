#pragma once

namespace calc
{

class IFace
{
public:
    virtual ~IFace() = default;

    virtual void setHours(unsigned value) = 0;
    virtual void setMinutes(unsigned value) = 0;
    virtual void setSeconds(unsigned value) = 0;

};

}
