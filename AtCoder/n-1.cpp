#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    int n, m, x, soma = 0;
    cin >> n >> m;
    vector<int> vet(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        vet[i] = x;
        soma += x;
    }
    for(int i = 0; i < n; i++)
    {
        if(soma - vet[i] == m)
        {
            cout << "Yes" << '\n';
            return 0;
        }
    }
    cout << "No" << '\n';

    return 0;
}