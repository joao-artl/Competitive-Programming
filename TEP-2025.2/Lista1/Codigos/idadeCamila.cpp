#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    
    vector<int> vet(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> vet[i];
    }
    sort(vet.begin(), vet.end());
    cout << vet[1] << "\n";
    return 0;
}