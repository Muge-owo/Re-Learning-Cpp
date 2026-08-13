#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(int argc, const char *argv[])
{
    std::vector<int> vInt{};

    long long tmp;
    while(std::cin >> tmp){
        vInt.push_back(tmp);
    }

    long long total = std::accumulate(vInt.begin(), vInt.end(), 0LL \
    // );       // 不加参数直接累加
    , [](const long long all, int a){ return a % 2 == 0 ? all + (a * a) : all; });  // 添加 lambda 函数指定规则

    std::cout << total << std::endl;

    return 0;
}

// int main(int argc, const char *argv[])
// {
//     std::vector<int> vInt{};

//     int tmp;
//     while(std::cin >> tmp){
//         if(tmp % 2 == 0)
//             vInt.push_back(tmp);
//     }

//     long long total{};
//     for(int &a: vInt){
//         total += (a*a);
//     }

//     std::cout << total << std::endl;

//     return 0;
// }
