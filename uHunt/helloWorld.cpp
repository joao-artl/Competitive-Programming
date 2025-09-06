#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n, caso = 1;
    while(cin >> n && n >= 0){
        int cont = 0;
        int i = 1;
        while(i < n){
            i *= 2;
            cont++;
        }
        cout << "Case " << caso << ": " << cont << "\n";
        ++caso;
    }

    return 0;
}