#include <bits/stdc++.h>
using namespace std;

int main()
{    
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--)
    {
        int x, tam;
        cin >> x >> tam;
        if(tam % 2 == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << x << '\n';
        }
    }
    
    return 0;
}