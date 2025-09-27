#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n, q, num;
    cin >> n >> q;
    vector<long long> vet(n*2), soma(n*2+1);
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        vet[i] = num;
        vet[i+n] = num;
    }
    soma[0] = 0;
    for(int i = 0; i < n*2; i++)
    {
        soma[i+1] = soma[i] + vet[i]; 
    }
    
    int num2, num3, offset = 0;

    while(q--)
    {
        cin >> num;
        if(num == 1)
        {
            cin >> num2;
            offset = (offset+num2) % n;
        }
        if(num == 2)
        {
            cin >> num2 >> num3;
            int inicio = offset + num2 - 1;
            int fim = offset + num3;
            long long resultado = soma[fim] - soma[inicio];
            cout << resultado << '\n';
        }
    }

    return 0;
}