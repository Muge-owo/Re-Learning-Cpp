#include <iostream>
#include <iomanip>

int main() {
    std::string s1{}, s2{};

    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    std::cout << "Hi, " << s1 << "! You are " << s2 << " years old." << std::endl;

    return 0;
}
