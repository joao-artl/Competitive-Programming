#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, estado = 0, volume = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 1)
        {
            volume++;
        }

        if(x == 2)
        {
            if(volume > 0)
            {
                volume--;
            }
        }

        if(x == 3)
        {
            if(estado == 1)
            {
                estado = 0;
            }
            else{
                estado = 1;
            }
        }

        if((estado == 1) && (volume >= 3))
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }

    return 0;
}