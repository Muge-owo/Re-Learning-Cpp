#include <iostream>
// #include <algorithm>

int main() {
    std::string s{};

    std::getline(std::cin, s);

    // 法1 : 包含 algorithm 头文件，使用 std::reverse(首, 尾) 来反转
    // std::reverse(s.begin(), s.end());
    // std::cout << s << std::endl;

    // 法2 : 循环的方式 遍历输出每个字节
    // for(int i = s.size() - 1; i >= 0; i--)
    for(int i = s.length() - 1; i >= 0; i--)
        std::cout << s[i];
    std::cout << std::endl;

    return 0;
}
