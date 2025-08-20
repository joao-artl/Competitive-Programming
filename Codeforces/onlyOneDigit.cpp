#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int T;
    cin >> T;

    while(T--){
        string num;
        cin >> num;
        int tamanho = num.length();
        if(tamanho == 1){
            cout << num << "\n";
        }
        else{
            vector<int> vet(tamanho);
            for(int i = 0; i < tamanho; i++){
                vet[i] = num[i] -'0';
            }
            sort(vet.begin(), vet.end());
            cout << vet[0] << "\n";
        }
    }
    return 0;
}