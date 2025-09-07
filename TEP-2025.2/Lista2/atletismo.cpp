#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int,int>> vet(n+1);
    vet[0].first = -1;
    vet[0].second = -1;
    for(int i = 1; i < n+1; i++){
        cin >> vet[i].first;
        vet[i].second = i;
    }
    sort(vet.begin(), vet.end());
    for(int i = 1; i < n+1; i++){
        cout << vet[i].second << '\n';
    }

    return 0;
}