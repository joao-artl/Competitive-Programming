#include <bits/stdc++.h>
using namespace std;

int main()
{
    int altura, largura;
    pair<int,int> p1 (-1,-1);
    pair<int,int> p2;
    cin >> altura >> largura;
    int tam = 1;
    while(tam < altura + 1)
    {
        string x;
        cin >> x;

        for(int j = 0; j < largura; j++)
        {
            if(x[j] == 'o' && p1.first == -1 && p1.second == -1)
            {
                p1.first = tam;
                p1.second = j;
            }
            else if(x[j] == 'o')
            {
                p2.first = tam;
                p2.second = j;
            }
        }
        tam++;
    }
    int resultado;
    resultado = abs(p1.first - p2.first) + abs(p1.second - p2.second);
    cout << resultado << '\n';

    return 0;
}