#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    queue<int> q;
    int n, k, x;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        q.push(x);
    }
    for(int i = 0; i < k; i++)
    {
        q.pop();
        q.push(0);
    }
    while(q.size() != 0)
    {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << '\n';

    return 0;
}