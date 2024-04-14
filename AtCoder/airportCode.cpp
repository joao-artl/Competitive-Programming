#include <bits/stdc++.h>
using namespace std;

int main(){
    string palavra, codigo;
    int contador = 0;
    cin >> palavra;
    cin >> codigo;
    for(int i = 0; i < palavra.length(); i++){
        for(int j = 0; j < 3; j++){
            if(codigo[j] + 32 == palavra[i]){
                contador++;
            }
        }
    }
    if(contador == 3){
        cout << "Yes" << endl;
    }
    else if((contador == 2) && (codigo[2] == 'X') ){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}