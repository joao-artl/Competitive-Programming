#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    A = A + B; 
    if(A >= 15 && B >= 8){
        cout << 1 << endl;
    }
    else if(A >= 10 && B >= 3){
        cout << 2 << endl;
    }
    else if(A >= 3){
        cout << 3 << endl;
    }
    else{
        cout << 4 << endl;
    }
    return 0;
}