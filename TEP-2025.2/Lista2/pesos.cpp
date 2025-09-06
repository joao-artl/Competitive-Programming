#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    int n, peso, novoPeso;
    cin >> n;
    cin >> peso;
    if(peso > 8){
        cout << 'N' << '\n';
        return 0;
    }
    for(int i = 0; i < n-1; ++i){
        cin >> novoPeso;
        if(novoPeso - peso > 8){
            cout << 'N' << '\n';
            return 0;
        }
        peso = novoPeso;
    }
    cout << 'S' << '\n';

    return 0;
}