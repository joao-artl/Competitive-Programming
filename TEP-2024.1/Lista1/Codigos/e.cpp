#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    return (a / mdc(a, b)) * b;
}

int main(){
    int ang, mmcAng;
    cin >> ang;
    if(360 % ang == 0){
        cout << 360 / ang << endl;
    }
    else{
        mmcAng = mmc(ang, 360);
        mmcAng = mmcAng / ang;
        cout << mmcAng << endl;
    }
    return 0;
}