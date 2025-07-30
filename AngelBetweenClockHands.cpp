#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    h = h % 12;

    float hour_angle = h * 30 + m * 0.5;
    float min_angle = m * 6;
    float ans = abs(min_angle - hour_angle);
    if (ans > 180)
    {
        ans = 360 - ans;
    }
    cout << "Angle between two Hands: " << ans;
}