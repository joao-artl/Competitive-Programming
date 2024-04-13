#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b,d;
    double rad, a2, b2;
    cin >> a >> b >> d;
    // transforma um angulo de graus pra radianos
    rad = d * (M_PI /180);
    // rotação dos pontos dado um ângulo
    a2 = (a*cos(rad)) - (b*sin(rad)); 
    b2 = (a*sin(rad)) + (b*cos(rad));
    // define as casas decimais da saída
    cout << fixed << setprecision(15);
    cout << a2 << ' ' << b2;
    return 0;
}