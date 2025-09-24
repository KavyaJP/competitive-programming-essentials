#include <iostream>
#include <string>
#include <vector>

std::string buildString(const std::string &str)
{
    std::string result = "";
    for (char c : str)
    {
        if (c == '#')
        {
            if (!result.empty())
            {
                result.pop_back();
            }
        }
        else
        {
            result.push_back(c);
        }
    }
    return result;
}

bool backspaceCompare(std::string s, std::string t)
{
    std::string finalS = buildString(s);
    std::string finalT = buildString(t);

    return finalS == finalT;
}

int main()
{
    std::string s, t;
    std::cin >> s >> t;

    if (backspaceCompare(s, t))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    return 0;
}