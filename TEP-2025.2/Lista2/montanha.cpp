#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    int n, cont = 0;
    cin >> n;
    vector<int> vet(n);
    for(int i = 0; i < n; ++i){
        cin >> vet[i];
    }
    for(int i = 1; i < n-1; ++i){
        if(vet[i-1] > vet[i] && vet[i] < vet[i+1]){
            cont++;
            break;
        }
    }
    if(cont > 0){
        cout << 'S' << '\n';
    }
    else{
        cout << 'N' << '\n';
    }

    return 0;
}