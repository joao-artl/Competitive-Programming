#include <bits/stdc++.h>
using namespace std;
using ponto = pair<int,int>;

int main(){
    int t, n, contador = 0;
    cin >> t;
    ponto p;
    p.first = 0;
    p.second = 0;
    for(int j = 0; j < t; j++){
        cin >> n;
        string string;
        cin >> string;
        for(int i = 0; i < string.length(); i++){
            if(string[i] == 'U') {
                p.first++;
            }
            if(string[i] == 'D'){
                p.first--;
            }
            if(string[i] == 'R'){
                p.second++;
            }
            if(string[i] == 'L'){
                p.second--;
            } 
            if(p.first == 1 && p.second == 1){
                contador++;
            }
        }
        if(contador == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        contador = 0;
        p.first = 0;
        p.second = 0;
    }
    return 0;
}