#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    string resposta, compara = "tea";
    for(int i = n-3; i < s.length(); i++){
        resposta += s[i];
    }
    if(resposta == compara){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}