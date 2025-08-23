#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    while(T--){
        int tamStrOriginal, tamStrNova;
        cin >> tamStrOriginal;
        string palavraOriginal,listaLetras,ordem;
        cin >> palavraOriginal;
        cin >> tamStrNova;
        cin >> listaLetras;
        cin >> ordem;

        for(long unsigned int i = 0; i < ordem.size(); i++){
            char letra = listaLetras[i];
            if(ordem[i] == 'V'){
                palavraOriginal.insert(palavraOriginal.begin(), letra);
            }
            else{
                palavraOriginal.insert(palavraOriginal.end(),letra);
            }
        }
        cout << palavraOriginal << "\n";
    }
    return 0;
}