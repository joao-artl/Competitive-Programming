#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int maior, num, segundoMaior = -1, trofeu = 1, placa = 0;
    cin >> maior;
    for(int i = 1; i < 5; ++i)
    {   
        cin >> num;
        if(num == maior)
        {
            ++trofeu;
        }
        else if(placa == 0)
        {
            ++placa;
            segundoMaior = num;
        }
        else if(num == segundoMaior)
        {
            ++placa;
        }
    }
    cout << trofeu << ' ' << placa << '\n';

    return 0;
}