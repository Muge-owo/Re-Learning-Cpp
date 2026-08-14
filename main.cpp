#include <iostream>
#include <vector>

int main(int argc, const char *argv[])
{
    std::vector<std::string> oWari{};
    oWari.push_back("完全勝利だぜ!!!☆");
    oWari.push_back("おめでとう👏");

    for(auto &out: oWari){
        if(out.find("👏") != std::string::npos){
            for(char *a = out.data(); *a != '\0'; a++)
                std::cout << out << " * " << int(a-out.data()+1) << std::endl;
        }
        std::cout << out << std::endl;
    }
    
    return 0;
}
