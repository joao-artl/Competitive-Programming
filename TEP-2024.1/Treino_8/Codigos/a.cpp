#include <bits/stdc++.h> 
using namespace std;

int main(){
    int m, h;
    cin >> m;
    cin >> h;
    if(h%m == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}