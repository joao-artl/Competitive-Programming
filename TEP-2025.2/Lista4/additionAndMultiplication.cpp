#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    int soma = 1;
    while(n--)
    {
        if(soma < k)
        {
            soma *= 2;
        }
        else{
            soma += k;
        }
    }
    cout << soma << '\n';

    return 0;
}