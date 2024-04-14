#include <bits/stdc++.h>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    for(int i = 1; i <= tamanho; i++){
        if(i%3 == 0){
            cout << "x";
        }
        else{
            cout << "o";
        }
    }
    cout << endl;
    return 0;
}