/*Asteroid Collision
You are given an array asteroids of integers representing asteroids in a row.

Each asteroid is represented by an integer. The absolute value represents its size, and the sign represents its direction:

Positive value (+) means the asteroid is moving to the right.
Negative value (-) means the asteroid is moving to the left.
All asteroids move at the same speed.
When two asteroids collide:

The smaller one will explode.
If both asteroids are of the same size, both will explode.
Asteroids moving in the same direction will never collide.
Your task is to determine the state of the asteroids after all collisions have occurred.

Input Format

The first line contains an integer n, the number of asteroids (2 <= n <= 10^4).
The second line contains n space-separated integers representing the asteroids in a row, where -1000 <= asteroids[i] <= 1000 and asteroids[i] != 0.
Constraints

The size of the asteroid array is always at least 2 and at most 10^4 Each asteroid's value is a non-zero integer between -1000 and 1000.

Output Format

Output a list of integers representing the asteroids that remain after all collisions have been resolved.

Sample Input 0

3
5 10 -5
Sample Output 0

5 10
Explanation 0

The asteroid 10 and -5 collide, resulting in 10 surviving. The asteroids 5 and 10 never collide.
*/

#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
    stack<int> s;

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

    vector<int> result(s.size());
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
    cin >> n;

    vector<int> asteroids(n);
    for (int i = 0; i < n; ++i)
        cin >> asteroids[i];

    vector<int> remainingAsteroids = asteroidCollision(asteroids);

    for (int i = 0; i < remainingAsteroids.size(); ++i)
        cout << remainingAsteroids[i] << " ";

    cout << endl;

    return 0;
}