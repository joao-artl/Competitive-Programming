#include <bits/stdc++.h>
using namespace std;

int main(){
    string palavra;
    cin >> palavra;
    if(palavra == "red"){
        cout << "SSS" << endl;
    }
    else if(palavra == "blue"){
        cout << "FFF" << endl;
    }
    else if(palavra == "green"){
        cout << "MMM" << endl;
    }
    else{
        cout << "Unknown" << endl;
    }
    return 0;
}