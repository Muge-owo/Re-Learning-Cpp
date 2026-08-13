#include <iostream>

class Rectangle{
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) :width(w), height(h) {}

    int area() const { return width * height; }
    int perimeter() const { return 2 * (width + height); }
};

int main(int argc, const char *argv[])
{
    int w{}, h{};
    std::cin >> w >> h;

    Rectangle rec1(w, h);

    std::cout << "area: " << rec1.area() << std::endl;
    std::cout << "perimeter: " << rec1.perimeter() << std::endl;

    return 0;
}
