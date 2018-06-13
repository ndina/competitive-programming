#include <cctype>
#include <cstring>
#include <iostream>
#include <unordered_set>
#include <string>
 
bool CheckAlpha(const char c)
{
    static const std::unordered_set<char> us = {'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'};
    return us.find(c) != us.end();
}
 
bool Check(const std::string &str)
{
    return str.length() == 6 &&
        CheckAlpha(str[0]) &&
        isdigit(str[1]) &&
        isdigit(str[2]) &&
        isdigit(str[3]) &&
        CheckAlpha(str[4]) &&
        CheckAlpha(str[5]);
}
 
int main()
{
    int N;
    std::cin >> N;
    std::string str;
    for (int i = 0; i < N && std::cin >> str; i++)
        std::cout << (Check(str) ? "Yes\n" : "No\n");
}