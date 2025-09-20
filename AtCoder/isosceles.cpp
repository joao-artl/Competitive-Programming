#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int x, y, z;
    cin >> x >> y >> z;
    if(x == y)
    {
        cout << "Yes" << '\n';
    }
    else if(x == z)
    {
        cout << "Yes" << '\n';
    }
    else if(y == z)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}