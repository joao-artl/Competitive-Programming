#include <bits/stdc++.h>
using namespace std;

int main(){
    string bacteria;
    string anti;

    // Loop que continua até o final das entradas
    while(cin >> bacteria >> anti){

        // Verifica se anti é uma substring de bacteria, se for encontrado, a função find retorna um índice diferente de npos
        if(bacteria.find(anti) != string::npos){
            cout << "Resistente" << endl;
        }
        else{
            cout << "Nao resistente" << endl;
        }
    }
    return 0;
}