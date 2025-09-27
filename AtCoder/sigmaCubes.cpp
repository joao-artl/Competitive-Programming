#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int soma = 0, n, x;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        x = pow(-1,i) * pow(i, 3);
        soma += x;
    }
    cout << soma << '\n';

    return 0;
}