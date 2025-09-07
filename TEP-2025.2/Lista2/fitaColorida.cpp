#include <bits/stdc++.h>
using namespace std;

#define MAX 11000

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> vet(n);
    vector<int> esq(n, MAX);
    vector<int> dir(n, MAX);
    for(int i = 0; i < n; ++i)
    {
        cin >> vet[i];
    }

    if(vet[0] == 0)
    {
        esq[0] = 0;
    }
    for(int i = 1; i < n; ++i)
    {
        if(vet[i] == 0)
        {
            esq[i] = 0;
        }
        else
        {
            esq[i] = esq[i-1] + 1;
        }
    }

    if(vet[n-1] == 0) 
    {
        dir[n-1] = 0;
    }
    for(int i = n-2; i >= 0; --i)
    {
        if(vet[i] == 0)
        {
            dir[i] = 0;
        }
        else
        {
            dir[i] = dir[i+1] + 1;
        }
    }

    for(int i = 0; i < n-1; i++){
        cout << min(9, min(esq[i], dir[i])) << ' ';
    }
    cout << min(9, min(esq[n-1], dir[n-1])) << "\n";

    return 0;
}