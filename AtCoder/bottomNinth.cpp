#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 0, a = 0, n, placarFinal;
    for(int i = 0; i < 17; i++){
        cin >> n;
        if(i < 9){
            t = t + n;
        }
        else{
            a = a + n;
        }
    }
    placarFinal = (t - a) + 1;
    cout << placarFinal << endl;
}