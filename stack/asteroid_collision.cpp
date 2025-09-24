#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

std::vector<int> asteroidCollision(std::vector<int> &asteroids)
{
    std::stack<int> s;

    for (int ast : asteroids)
    {
        bool destroyed = false;
        while (!s.empty() && ast < 0 && s.top() > 0)
        {
            if (s.top() > -ast)
            {
                destroyed = true;
                break;
            }
            else if (s.top() == -ast)
            {
                s.pop();
                destroyed = true;
                break;
            }
            else
            {
                s.pop();
            }
        }

        if (!destroyed)
            s.push(ast);
    }

    std::vector<int> result(s.size());
    for (int i = s.size() - 1; i >= 0; i--)
    {
        result[i] = s.top();
        s.pop();
    }
    return result;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> asteroids(n);
    for (int i = 0; i < n; ++i)
        std::cin >> asteroids[i];

    std::vector<int> remainingAsteroids = asteroidCollision(asteroids);

    for (int i = 0; i < remainingAsteroids.size(); ++i)
        std::cout << remainingAsteroids[i] << (i == remainingAsteroids.size() - 1 ? "" : " ");

    std::cout << std::endl;

    return 0;
}