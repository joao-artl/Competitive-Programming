#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    vector<int> vet(n, 0); // Cria vetor de tamanho 5, com todos valores = 0

    vet.push_back(5); // Adiciona valor no fim do vetor
    vet.pop_back(); // Remove ultimo valor do vetor
    vet.size(); // Retorna tamanho do vetor
    vet.clear(); // Remove todos os elementos mas não libera a memória alocada
    sort(vet.begin(), vet.end()) // Ordenação, greater<int> para colocar em ordem decrescente

    vector<vector<int>> matriz(n, vector<int>(n, -2)); // Declara Matriz de tamanho NxN
    for (int i = 0; i < n; i++) {           // percorre as linhas
        for (int j = 0; j < n; j++) {       // percorre as colunas
            cout << matriz[i][j];    // acessa elemento [i][j]
        }
    }
}