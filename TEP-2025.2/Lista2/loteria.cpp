#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<int> vet1(6), vet2(6);
    int cont = 0;
    for(int i = 0; i < 6; ++i){
        cin >> vet1[i];
    }
    for(int i = 0; i < 6; ++i){
        cin >> vet2[i];
    }
    for(int i = 0; i < 6; ++i){
        for(int j = 0; j < 6; ++j){
            if(vet1[i] == vet2[j]){
                ++cont;
                break;
            }
        }
    }
    if(cont == 3){
        cout << "terno" << "\n";
    }
    else if(cont == 4){
        cout << "quadra" << "\n";
    }
    else if(cont == 5){
        cout << "quina" << "\n";
    }
    else if(cont == 6){
        cout << "sena" << "\n";
    }
    else{
        cout << "azar" << "\n";
    }

    return 0;
}