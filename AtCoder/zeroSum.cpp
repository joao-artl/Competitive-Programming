#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, soma = 0;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> p;
        soma = soma + p;
    }
    if(soma == 0){
        cout << 0 << endl;
    }
    else{
        cout << soma * -1 << endl;
    }
    return 0;
}