#pragma once

#include "IFace.hpp"
#include <ctime>
#include <iosfwd>

namespace calc
{

class Face : public IFace
{
public:
    Face(std::ostream& os);

    void setHours(unsigned value) override;
    void setMinutes(unsigned value) override;
    void setSeconds(unsigned value) override;

private:
    void refresh();
    std::ostream& os;
    tm currentTime;
};

}


