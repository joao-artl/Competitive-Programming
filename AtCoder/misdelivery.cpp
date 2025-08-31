#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<string> nomes;
    string nome;
    for(int i = 0; i < N; i++){
        cin >> nome;
        nomes.push_back(nome);
    }
    int local;
    cin >> local >> nome;
    if(nomes[local - 1] == nome){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
    return 0;
}