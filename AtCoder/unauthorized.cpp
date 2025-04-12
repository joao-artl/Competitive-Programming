#include <bits/stdc++.h>
using namespace std;

int main(){
    string palavra;
    int N, status = 0, contador = 0;
    cin >> N;
    cout << palavra << endl;
    while(N){
        cin >> palavra;
        if(palavra == "login"){
            status = 1;
        }
        if(palavra == "logout"){
            status = 0;
        }
        if(palavra == "private" && status == 0){
            contador++;
        }  
        N--; 
    }
    cout<< contador << endl;
    return 0;
}