#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, num;
    cin >> n;
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
    
}