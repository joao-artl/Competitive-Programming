#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n, cont1 = 0, cont2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n - 1; ++i){
        if(s[i] == 'S' && s[i+1] == 'F'){
            ++cont1;
        }
        else if(s[i] == 'F' && s[i+1] == 'S'){
            ++cont2;
        }
    }
    if(cont1 > cont2){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }

    return 0;
}