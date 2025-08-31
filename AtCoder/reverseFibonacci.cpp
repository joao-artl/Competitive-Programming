#include <bits/stdc++.h>
using namespace std;

vector<long long> f(11, -1);

long long fibonacci (int n){
    if(f[n] == -1){
        f[n] = fibonacci(n-1) + fibonacci(n-2);
        string s = to_string(f[n]);
        if(s.length() >= 2){
        reverse(s.begin(), s.end());
        f[n] = stoll(s);
        }
    }
    return f[n];
}

int main(){
    ios::sync_with_stdio(false);

    long long x, y, resultado;
    cin >> x >> y;
    f[1] = x;
    f[2] = y;
    resultado = fibonacci(10);
    cout << resultado << "\n";
    return 0;
}