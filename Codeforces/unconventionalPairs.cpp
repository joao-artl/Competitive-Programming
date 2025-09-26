#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vet;
    int n, x, num, diff = 0, atual;
    cin >> n;
    while(n--)
    {
        cin >> x;
        for(int i = 0; i < x; i++)
        {
            cin >> num;
            vet.emplace_back(num);
        }
        sort(vet.begin(), vet.end());
        diff = abs(vet[0] - vet[1]);
        if(vet.size() > 2)
        {
            for(size_t i = 2; i < vet.size(); i += 2)
            {
                atual = abs(vet[i] - vet[i+1]);
                if(atual > diff)
                {
                    diff = atual;
                }
            }
        }
        cout << diff << '\n';
        diff = 0;
        vet.clear();
    }
    
    return 0;
}