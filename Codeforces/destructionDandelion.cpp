#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--)
    {
        int tam, num, impar = 0, desliga = 0;
        long long par = 0;
        cin >> tam;
        vector<int> vet;
        for(int i = 0; i < tam; i++)
        {
            cin >> num;
            if(num % 2 == 0)
            {
                par += num;

            }
            else{
                vet.push_back(num);
                impar++;
                if(impar % 2 == 0 && impar > 0)
                {
                    desliga++;
                }
            }
        }
        if(vet.size() == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            sort(vet.begin(), vet.end());
            for(size_t i = desliga; i < vet.size(); i++)
            {
                par += vet[i];
            }
            cout << par << '\n';
        }
    }

    return 0;
}