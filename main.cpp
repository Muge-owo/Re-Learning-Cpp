#include <iostream>

void swap(int &a, int &b)
{
    if(&a != &b){
        a ^= b;
        b ^= a;
        a ^= b;
    }
}

int main(int argc, const char *argv[])
{
    int a{}, b{};
    std::cin >> a >> b;
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    return 0;
}