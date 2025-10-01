#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(3); // Adiciona elemento na pilha
    st.pop(); // Remove elemento no topo
    st.empty(); // Verifica se a pilha está vazia
    st.size(); // Retorna tamanho da pilha
    st.top(); // Retorna valor no topo da pilha

    // Exemplo de delimitador com pilha
    string n, resultado = "";
    stack<char> st;
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
}