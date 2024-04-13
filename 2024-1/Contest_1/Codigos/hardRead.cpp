#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tImpar = 0, tPar = 0, par = 0, impar = 0;
    string palavra;
    cin >> palavra;
    for (int i = 0; i < palavra.length(); i++)
    {
        if (i % 2 == 0)
        {
            tPar++;
            if (palavra[i] > 96 && palavra[i] < 123)
            {
                par++;
            }
        }
        if (i % 2 != 0)
        {
            tImpar++;
            if (palavra[i] > 64 && palavra[i] < 91)
            {
                impar++;
            }
        }
    }
    if (tPar == par && tImpar == impar)
    {
        cout << "Yes" << endl;
    }
    else
    {
    cout << "No" << endl;
    }
    return 0;
}