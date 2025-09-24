#include <iostream>
#include <vector>
#include <numeric>

class Stack
{
private:
    std::vector<int> arr;
    int topIndex;

public:
    Stack(int size)
    {
        arr.resize(size);
        topIndex = -1;
    }

    void push(int value)
    {
        if (topIndex == arr.size() - 1)
        {
            std::cout << "Stack overflow" << std::endl;
            return;
        }
        arr[++topIndex] = value;
    }

    void pop()
    {
        if (topIndex == -1)
        {
            std::cout << "Stack underflow" << std::endl;
            return;
        }
        topIndex--;
    }

    int top()
    {
        if (topIndex == -1)
            return -1;
        return arr[topIndex];
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }
};

class Queue
{
private:
    std::vector<long long> arr;
    int frontIndex, rearIndex, capacity;

public:
    Queue(int size)
    {
        arr.resize(size);
        frontIndex = 0;
        rearIndex = 0;
        capacity = size;
    }

    void enqueue(long long value)
    {
        if (rearIndex == capacity)
            return;
        arr[rearIndex++] = value;
    }

    void dequeue()
    {
        if (frontIndex == rearIndex)
            return;
        frontIndex++;
    }

    long long front()
    {
        if (frontIndex == rearIndex)
            return -1;
        return arr[frontIndex];
    }

    bool isEmpty()
    {
        return frontIndex == rearIndex;
    }
};

void solve(int n, std::vector<int> &stones)
{
    Queue q(3 * n);
    for (int stone : stones)
    {
        q.enqueue(stone);
    }

    int lastPlayer = -1;
    int currentSize = n;
    bool isViveksTurn = true;

    while (currentSize > 1)
    {
        if (isViveksTurn)
        {
            q.enqueue(q.front());
            q.dequeue();

            q.dequeue();
            lastPlayer = 1;
        }
        else
        {
            q.enqueue(q.front());
            q.dequeue();
            q.enqueue(q.front());
            q.dequeue();

            q.dequeue();
            lastPlayer = 0;
        }

        currentSize--;
        isViveksTurn = !isViveksTurn;
    }

    std::cout << lastPlayer << " " << q.front() << std::endl;
}

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N;
        std::cin >> N;
        std::vector<int> stones(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> stones[i];
        }
        solve(N, stones);
    }
    return 0;
}