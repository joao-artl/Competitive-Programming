#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if((d/v) >= t && (d/v) <= s){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
}