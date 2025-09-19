#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int n, cont = 0;
    cin >> n;
    for(int i = 1; i < n; ++i)
    {
        if(n % i == 0)
        {
            cont++;
        }
    }
    cout << cont << '\n';

    return 0;
}