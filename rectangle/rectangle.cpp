#include <rectangle.hpp>

Rectangle::Rectangle(const int x1, const int y1, const int x2, const int y2)
{
    length_ = std::abs(x2 - x1);
    width_ = std::abs(y2 - y1);
}

int Rectangle::length()
{
    return length_;
}
int Rectangle::width()
{
    return width_;
}
int Rectangle::square()
{
    return width_ * length_;
}