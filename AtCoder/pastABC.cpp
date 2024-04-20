#include <bits/stdc++.h>
using namespace std;

int main(){
    string palavra, numero;
    cin >> palavra;
    numero[0] = palavra[3];
    numero[1] = palavra[4];
    numero[2] = palavra[5];
    int n = stoi(numero);
    if(n >= 1 && n <= 349 && n != 316){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}