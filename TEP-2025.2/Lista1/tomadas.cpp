#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int soma = 0, t;
    for(int i = 0; i < 3; i++){
        cin >> t;
        soma += t - 1;
    }
    cin >> t;
    soma += t;
    cout << soma << "\n";
    return 0;
}