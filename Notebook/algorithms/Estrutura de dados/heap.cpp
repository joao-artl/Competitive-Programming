#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // Por padrão max-heap
    priority_queue<int, vector<int>, greater<int>> pqMin; // Para criar uma min-heap 

    pq.push(30); // Adiciona elemento
    pq.top(); // Acessa elemento de maior prioridade
    pq.pop(); // Remove elemento de maior prioridade
    pq.size(); // Retorna tamanho da fila
    pq.empty(); // Retorna se a fila está vazia

}