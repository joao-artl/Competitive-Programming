#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N, S, temp;
    cin >> N >> S;
    vector<int> vet(N);
    for(int i = 0; i < N; i++){
        cin >> temp;
        S += temp;
        vet[i] = S;
    }
    sort(vet.begin(), vet.end());
    cout << vet[0] << '\n';
    
    return 0;
}