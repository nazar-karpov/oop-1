#include <iostream>
#include "rectangle.hpp"

int main()
{
    Rectangle rec1;
    std::cout << "Length: " << rec1.length() << std::endl;
    std::cout << "Width: " << rec1.length() << std::endl;
    std::cout << "Square: " << rec1.square() << std::endl;
    std::cout << std::endl;
    Rectangle rec2(2, 3, -2, -3);
    std::cout << "Length: " << rec2.length() << std::endl;
    std::cout << "Width: " << rec2.width() << std::endl;
    std::cout << "Square: " << rec2.square() << std::endl;
    return 0;
}