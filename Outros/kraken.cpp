#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, contador = 0,afundado = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        int v[n],posI = 0,posF = n;
        for(int j = 0; j < n; j++){
            cin >> v[j];
        }
        for(int z = 0; z < k; z++){
            if(contador%2 == 0){
                if(v[posI] == 0){
                    posI++;
                    afundado++;
                }
                v[posI]--;
            }
            if(contador%2 !=0){
                if(v[posF] == 0){
                    posF--;
                    afundado++;
                }
                v[posF]--;
            }
        }
        cout << afundado << endl;
        afundado = 0;
    }
    return 0;
}