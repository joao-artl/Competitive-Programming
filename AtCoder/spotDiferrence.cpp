#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n+1][n+1];
    char b[n+1][n+1];
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            if(a[i][j] != b[i][j]){
                cout << i << " " << j;
                break;
            }
        }
    }
    return 0;
}