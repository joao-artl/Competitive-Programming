#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int tam, n, x, cont = 0, negativos = 0;
    cin >> tam;
    while(tam--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(x == 0)
            {
                cont++;
            }
            if(x == -1)
            {
                negativos++;

            }
        }
        if(negativos % 2 != 0)
        {
            cout << cont+2 << '\n';
        }
        else
        {
            cout << cont << '\n';
        }
        cont = 0;
        negativos = 0;
    }

    return 0;
}