#include <iostream>
#include <iomanip>

int main() {
    char ch{};
    std::cin >> ch;

    if(ch >= 'A' && ch <= 'Z')
        for(int i = ch - 'A'; i >= 0; i--){
            std::cout << std::setw(i+1) << std::setfill(' ') << 'A';
            for(int j = 1; j <= ch-'A'-i; j++)
                std::cout << static_cast<char>(j+'A');
            for(int j = ch-'A'-i-1; j >= 0; j--)
                std::cout << static_cast<char>(j+'A');
            std::cout << std::endl;
        }

    return 0;
}
