#include <iostream>

int square(int n) { return n*n; };

int main(int argc, const char *argv[])
{
    int n{};
    std::cin >> n;
    std::cout << square(n) << std::endl;

    return 0;
}
