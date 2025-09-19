#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n;
    map<string, string> joias
    {
        {"red", "Reality"},
        {"purple","Power"},
        {"yellow", "Mind"},
        {"orange", "Soul"},
        {"blue", "Space"},
        {"green","Time"}
    };
    cin >> n;
    string x;
    while(n--)
    {
        cin >> x;
        joias.erase(x);
    }
    int tam = joias.size();
    cout << tam << '\n';
    for(auto i = joias.begin(); i != joias.end(); ++i)
    {
        cout << i->second << '\n';
    }

    return 0;
}