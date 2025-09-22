#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int n, x, cont = 1, smith = 0, aluno = 0;
    cin >> n;
    n--;
    for(int i = 0; i < 4; i++)
    {
        cin >> x;
        smith += x;
    }
    while(n--)
    {
        for(int i = 0; i < 4; i++)
        {
            cin >> x;
            aluno += x;
        }
        if(aluno > smith)
        {
            cont++;
        }
        aluno = 0;
    }
    cout << cont << '\n';

    return 0;
}