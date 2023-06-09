#include "Point.h"

Point::Point(int x, int y) : x(x), y(y)
{
    if (x < 0 && y < 0)
    {
        throw std::invalid_argument("Invalid circle point.");
    }
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << "," << p.y << ")";
    return os;
}
