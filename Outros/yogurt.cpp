#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,u,d,ind,dupl;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> u >> d;
        ind = n*u;
        dupl = (n/2)*d +(n%2)*u;
        if(ind > dupl){
            cout << dupl << endl;
        }
        else{
            cout << ind << endl;
        }
    }
    return 0;
}