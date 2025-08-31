#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> vet(n);
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    int j = n - 1, diff = vet[0] + vet[n-1];
    for(int i = 1; i < n-1; i++){
        j--;
        if(diff != vet[i] + vet[j]){
            cout << 'N' << "\n";
            return 0;
        }
    }
    cout << 'S' << "\n";

    return 0;
}