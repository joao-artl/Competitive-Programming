#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n;
    stack<char> st;
    cin >> n;
    string num;
    cin >> num;
    for(size_t i = 0; i < num.size(); i++)
    {
        if(st.empty() || st.top() == num[i])
        {
           st.push(num[i]);
        }
        else
        {
            st.pop();
        }
    }
    int tamanho = st.size();
    cout << tamanho << '\n';

    return 0;
}