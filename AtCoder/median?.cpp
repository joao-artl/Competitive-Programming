#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if((y <= x && y >= z) || (y >= x && y <= z))
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}