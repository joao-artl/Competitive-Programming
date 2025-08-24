#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int inicio,fim,resposta;
    cin >> inicio >> fim;
    resposta = inicio + fim;
    if (resposta > 12) {
        resposta -= 12;
    }
    cout << resposta << "\n";
    return 0;
}