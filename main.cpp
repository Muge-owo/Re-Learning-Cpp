#include <iostream>
#include <iomanip>

int main() {
    std::string s1{};

    std::getline(std::cin, s1);

    // 寻找子串并返回从其开始的字符串
    if(s1.find("lo") != std::string::npos)
        std::cout << s1.substr(s1.find("lo")) << std::endl;
    else
        std::cout << "None" << std::endl;

    return 0;
}
