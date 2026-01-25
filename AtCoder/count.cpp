#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cont = 0;
    cin >> s;
    for(long unsigned int i = 0; i < sizeof(s); i++)
    {
        if(s[i] == 'i' || s[i] == 'j')
        {
            cont++;
        }
    }
    cout << cont << '\n';

    return 0;
}
