#include <iostream>
// #include <streambuf>

// class BufferInspector : public std::streambuf {
// public:
//     char *getPBase() const { return pbase(); }
//     char *getPPtr() const { return pptr(); }
//     char *getEPPtr() const { return epptr(); }
// };

int main() {
    int a{};
    std::cin >> a;
    
    // if(a % 15 == 0)
    //     std::cout << "FizzBuzz";
    // else if(a % 3 == 0)
    //     std::cout << "Fizz";
    // else if(a % 5 == 0)
    //     std::cout << "Buzz";
    // std::cout << std::endl;

    
    if(a % 3 == 0)
        std::cout << "Fizz";
    if(a % 5 == 0)
        std::cout << "Buzz";
    std::cout << std::endl;


    // 试图通过读取输出缓冲区是否存在东西, 来判断是否需要在末尾换行
    // 失敗した失敗した失敗した失敗した失敗した
    // if(a % 3 == 0)
    //     std::cout << "Fizz";
    // if(a % 5 == 0)
    //     std::cout << "Buzz";
    
    // BufferInspector bufcout;
    // std::cout.rdbuf(&bufcout);

    // if(bufcout.getPBase() != bufcout.getEPPtr())
    //     std::cout << "+++" << std::endl;

    return 0;
}
