#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n, pontos;
    cin >> n >> pontos;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'o'){
            pontos++;
        }
        if(s[i] == 'x' && pontos > 0){
            pontos--;
        }
    }
    cout << pontos << endl;
    return 0;
}