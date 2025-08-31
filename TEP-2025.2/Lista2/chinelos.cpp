#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n, p, pedido, soma = 0;
    cin >> n;
    vector<int> vet(n);
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    cin >> p;
    for(int i = 0; i < p; i++){
        cin >> pedido;
        pedido--;
        if(vet[pedido] != 0){
            vet[pedido]--;
            soma++;
        }
    }
    cout << soma << "\n";

    return 0;
}