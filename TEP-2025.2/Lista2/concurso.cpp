#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> vet(n);
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    sort(vet.begin(), vet.end(), greater<int>());
    k--;
    cout << vet[k] << "\n";
    
    return 0;
}