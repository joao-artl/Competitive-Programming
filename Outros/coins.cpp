#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, moedas, faltam;
    cin >> n;
    moedas = n%100;
    faltam = 100 - moedas;
    cout << faltam << endl;
    return 0;
}