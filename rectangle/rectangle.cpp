#include <iostream>
#include <cmath>
#include <string>

class Rectangle
{
public:
    Rectangle() = default;
    Rectangle(const int x1, const int y1, const int x2, const int y2)
    {
        length = std::abs(x2 - x1);
        width = std::abs(y2-y1);
    }
    void parameters() {
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
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
    int length = 0;
    int width = 0;
};

int main()
{
    Rectangle rec1;
    rec1.parameters();
    Rectangle rec2(2, 3, -2, -3);
    rec2.parameters();
    return 0;
}
