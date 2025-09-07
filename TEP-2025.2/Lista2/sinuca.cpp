#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n, -2));
    for (int i = 0; i < n; ++i)
    {
        cin >> matriz[n-1][i];
    }
    while (n > 1)
    {
        for (int i = 0; i < n-1; ++i)
        {
            if (matriz[n-1][i] != matriz[n-1][i + 1])
            {
                matriz[n - 2][i] = -1;
            }
            else
            {
                matriz[n - 2][i] = 1;
            }
        }
        n--;
    }

    if(matriz[0][0] == -1)
    {
        cout << "branca" << '\n';
    }
    else
    {
        cout << "preta" << '\n';
    }

    return 0;
}