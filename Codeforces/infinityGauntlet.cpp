#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n, cont;
    cin >> n;
    cont = n;
    string palavra;
    vector<int> presentes(6, 0); 
    vector<string> joias {"Reality", "Power", "Mind", "Soul", "Space", "Time"};
    while(n--)
    {
        cin >> palavra;
        if(palavra == "red"){
            presentes[0]++;
        }
        else if(palavra == "purple")
        {
            presentes[1]++;
        }
        else if(palavra == "yellow")
        {
            presentes[2]++;
        }
        else if(palavra == "orange")
        {
            presentes[3]++;
        }
        else if(palavra == "blue")
        {
            presentes[4]++;
        }
        else if(palavra == "green")
        {
            presentes[5]++;
        }
    }
    cout << 6 - cont << '\n';
    for(int i = 0; i < 6; i++)
    {
        if(presentes[i] == 0)
        {
            cout << joias[i] << '\n';
        }
    }

    return 0;
}