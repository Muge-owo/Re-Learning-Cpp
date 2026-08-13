#include <iostream>
#include <map>

int main(int argc, const char *argv[])
{
    std::map<std::string, int>  mWord{};

    std::string word;
    while(std::cin >> word){
        mWord[word]++;
    }

    std::cout << mWord.size() << std::endl;

    return 0;
}