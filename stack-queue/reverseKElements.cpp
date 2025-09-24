// Reverse the first k elements of queue
#include <bits/stdc++.h>

/*
1. Recursion Brute Force
2. using stack
*/

void solveRec(std::queue<int> &q, int k)
{
    if (k == 0)
        return;
    int x = q.front();
    q.pop();
    solveRec(q, k - 1);
    q.push(x);
}

void reverseFirstK_Recursive(std::queue<int> &q, int k)
{
    if (q.empty() || k <= 0 || k > q.size())
        return;
    int n = q.size();

    solveRec(q, k);

    for (int i = 0; i < n - k; ++i)
    {
        q.push(q.front());
        q.pop();
    }
}

void usingStack(std::queue<int> &q, int k)
{
    if (q.empty() || k <= 0 || k > q.size())
        return;
    std::stack<int> s;
    const int n = q.size();
    for (int i = 0; i < k; ++i)
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for (int i = 0; i < n - k; ++i)
    {
        q.push(q.front());
        q.pop();
    }
}

void printQueue(std::queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        std::cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    std::queue<int> q1, q2;
    int n, k;

    std::cout << "Enter Queue Size: ";
    std::cin >> n;

    std::cout << "Enter " << n << " Queue Elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        q1.push(x);
        q2.push(x);
    }

    std::cout << "Enter k: ";
    std::cin >> k;

    std::cout << "Queue after reversing first k elements using recursive: ";
    reverseFirstK_Recursive(q1, k);
    printQueue(q1);
    std::cout << std::endl;

    std::cout << "Queue after reversing first k elements using recursive: ";
    usingStack(q2, k);
    printQueue(q2);
}