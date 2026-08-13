#include <iostream>
#include <iomanip>

class Shape{
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Square : public Shape{
    double side;
public:
    Square(double side) : side(side) {}
    double area() const override { return side * side; }
};

class Circle : public Shape{
    double r;
public:
    Circle(double r) : r(r) {}
    double area() const override { return 3.14159 * r * r; }
};

int main(int argc, const char *argv[])
{
    double side{}, r{};

    std::cin >> side >> r;

    Shape *squa = new Square(side);
    Shape *circ = new Circle(r);

    std::cout << std::fixed << std::setprecision(2) << squa->area() << std::endl ;
    std::cout << std::fixed << std::setprecision(2) << circ->area() << std::endl ;

    delete squa;
    delete circ;

    return 0;
}
