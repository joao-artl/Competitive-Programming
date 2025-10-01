#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    deque<int> dq;

    q.push(3); // Adiciona elemento na fila
    q.pop(); // Remove elemento no inicio
    q.empty(); // Verifica se a fila está vazia
    q.size(); // Retorna tamanho da fila
    q.front(); // Retorna valor no inicio da fila
    q.back(); // Retorna valor no fim da fila
    dq.push_front(3); // Adiciona elemento no inicio
    dq.pop_front(); // Remove elemento no inicio
    dq.push_back(3); // Adiciona elemento no fim
    dq.pop_back(); // Remove elemento no fim

}