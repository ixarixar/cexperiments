#include "Face.hpp"
#include <ostream>
#include <iomanip>

namespace calc
{


Face::Face(std::ostream& os)
    : os(os),
      currentTime{}
{
    refresh();
}

void Face::setHours(unsigned value)
{
    currentTime.tm_hour = value;
    refresh();
}

void Face::setMinutes(unsigned value)
{
    currentTime.tm_min = value;
    refresh();
}

void Face::setSeconds(unsigned value)
{
    currentTime.tm_sec = value;
    refresh();
}

void Face::refresh()
{
    // this is stub implementation
    os << '\r' << std::setw(2) << std::setfill('0') << currentTime.tm_hour
       << ':' <<  std::setw(2) << std::setfill('0') << currentTime.tm_min
       << ':' <<  std::setw(2) << std::setfill('0') << currentTime.tm_sec
       << std::flush;

}

}
