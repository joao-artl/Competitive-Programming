#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    string n, resultado = "";
    stack<char> st;
    cin >> n;
    cin >> n;
    for(size_t i = 0; i < n.length(); i++)
    {
        if(n[i] == '(')
        {
            st.push(n[i]);
            resultado += '(';
        }
        else if(n[i] == ')' && st.size() > 0)
        {
            st.pop();
            resultado += ')';
        }
        else if(n[i] == ')' && st.size() == 0)
        {
            resultado = '(' + resultado + ')';
        }
    }
    while(st.size() > 0)
    {
        resultado += ')';
        st.pop();
    }
    cout << resultado << '\n';

    return 0;
}