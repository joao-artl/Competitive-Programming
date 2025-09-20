#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;
    map<int,int> qResolvidas; 
    vector<int> ordem;
    int x, y;
    while(k--)
    {
        cin >> x >> y;
        if(qResolvidas.find(x) != qResolvidas.end())
        {
            qResolvidas[x] += 1;
        }
        else 
        {
            qResolvidas.emplace(x, 1);
        }
        if(qResolvidas[x] == m)
        {
            ordem.push_back(x);
        }
    }
    if(ordem.size() > 0)
    {
        for(size_t j = 0; j < ordem.size()-1; j++)
        {
            cout << ordem[j] << ' ';
        }
            cout << ordem.back() << '\n';
    }

    return 0;
}