#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b, c;
    string palavra;
    cin >> a >> b >> c;
    cin >> palavra;
    int resultado = a + b + c;
    cout << resultado << ' ' << palavra << endl;
    return 0;
}