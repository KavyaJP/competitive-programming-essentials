// generate 1 to n numbers binary using queue.
#include <iostream>
#include <string>
#include <queue>

void generateBinary(int n)
{
    if (n <= 0)
    {
        std::cout << "Please enter a positive number." << std::endl;
        return;
    }

    std::queue<std::string> q;

    q.push("1");

    for (int i = 0; i < n; ++i)
    {
        std::string current = q.front();
        q.pop();

        std::cout << current << " " << std::endl;

        q.push(current + "0");
        q.push(current + "1");
    }
}

int main()
{
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Binary numbers from 1 to " << n << ":" << std::endl;
    generateBinary(n);

    return 0;
}