#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;
    vector<int> vet(N);
    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }
    sort(vet.begin(), vet.end(), greater<int>());
    K--;
    cout << vet[K] << '\n';
    
    return 0;
}