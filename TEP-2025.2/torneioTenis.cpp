#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int vitorias = 0;
    char resultadoPartida;
    for(int i = 0; i < 6; i++){
        cin >> resultadoPartida;
        if(resultadoPartida == 'V'){
            vitorias++;
        }
    }
    if(vitorias >= 5){
        cout << 1 << '\n';
    }
    else if(vitorias < 5 && vitorias >= 3){
        cout << 2 << '\n';
    }
    else if(vitorias < 3 && vitorias >= 1){
        cout << 3 << '\n';
    }
    else{
        cout << -1 << '\n';
    }
    return 0;
}