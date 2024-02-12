#include <iostream>
#include <cmath>
#include <string>

class Rectangle
{
public:
    Rectangle() = default;
    Rectangle(const int x1, const int y1, const int x2, const int y2)
    {
        length_ = std::abs(x2 - x1);
        width_ = std::abs(y2-y1);
    }

    int length() {
        return length_;
    }
    int width() {
        return width_;
    }
    int square() {
        return width_ * length_;
    }


private:
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int x3 = 0;
    int y3 = 0;
    int x4 = 0;
    int y4 = 0;
    int length_ = 0;
    int width_ = 0;
};

int main()
{
    Rectangle rec1;
    std::cout << "Length: " << rec1.length() << std::endl;
    std::cout << "Width: " << rec1.length() << std::endl;
    std::cout << "Square: " << rec1.square() << std::endl;
    Rectangle rec2(2, 3, -2, -3);
    std::cout << "Length: " << rec2.length() << std::endl;
    std::cout << "Width: " << rec2.width() << std::endl;
    std::cout << "Square: " << rec2.square() << std::endl;
    return 0;
}
