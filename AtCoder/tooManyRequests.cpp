#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m, diff;
    cin >> n >> m;
    if(n <= m)
    {
        for(int i = 1; i <= n; i++)
        {
            cout << "OK" << '\n';
        }
    }
    else
    {
        diff = n - m;
        for(int i = 1; i <= m; i++)
        {
            cout << "OK" << '\n';
        }
        for(int i = 1; i <= diff; i++)
        {
            cout << "Too Many Requests" << '\n';
        }
    }

    return 0;
}