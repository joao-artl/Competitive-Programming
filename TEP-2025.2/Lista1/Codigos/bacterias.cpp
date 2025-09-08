#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int recipiente, fator, bacterias = 1, tempo = 0;
    cin >> recipiente >> fator;
    while(bacterias <= recipiente){
        bacterias *= fator;
        tempo++;
    }
    tempo--;
    cout << tempo << "\n";
    return 0;
}