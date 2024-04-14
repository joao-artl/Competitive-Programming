#include <bits/stdc++.h>
using namespace std;
using point = pair<int, int>;
using vetor = vector<point>;

int distancia(point a, point b){
    int res, x = a.first - b.first, y = a.second - b.second;
    x = pow(x, 2);
    y = pow(y, 2);
    res = x + y;
    res = sqrt(res);
    return res;
}

int main()
{
    int N, maior = -1, atual = -1;
    cin >> N;
    int indiceMaior = N;
    vetor v;
    v.resize(N + 1);
    v[0].first = 0;
    v[0].second = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = N; j > 0; j--)
        {
            atual = distancia(v[i],v[j]);
            if (atual > maior || (atual == maior && j < indiceMaior))
            {
                maior = atual;
                indiceMaior = j;
            }
        }
        cout << indiceMaior << endl;
        maior = -1;
        indiceMaior = N;
    }
    return 0;
}