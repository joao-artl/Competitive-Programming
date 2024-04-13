#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int minimo = 100000000;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j){
                minimo = min(minimo, a[i] + b[j]);
            } else {
                minimo = min(minimo, max(a[i], b[j]));
            }
        }
    }
    cout << minimo << endl;
    return 0;
}