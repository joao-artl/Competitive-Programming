#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, det;
    cin >> a >> b;
    cin >> c >> d;
    det = (a*d) - (b*c);
    cout << det << endl;
    return 0;
}