#include <iostream>

int main(int argc, const char *argv[])
{
    int n{};
    std::cin >> n;

    long long total{};
    for(int i = n; i > 0; i--)
        total += i;

    std::cout << total << std::endl;

    return 0;
}