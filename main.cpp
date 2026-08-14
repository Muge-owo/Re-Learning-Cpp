#include "main.h"

int main(int argc, const char *argv[])
{
    int a{}, b{};
    double x{}, y{};

    std::cin >> a >> b >> x >> y;
    std::cout << sumPair(a, b) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << sumPair(x, y) << std::endl;

    return 0;
}
