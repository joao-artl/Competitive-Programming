#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Set
    set<int> s;

    s.insert(10); // Adiciona o elemento
    s.size(); // Retorna o tamanho
    s.erase(10); // Remove o elemento 10
    s.empty(); // Verifica se está vazio
    s.clear(); // Remove todos os elementos

    // Itera e imprime os elementos ordenados
    for (int elemento : s) {
        cout << " " << elemento;
    }

    // Verifica se um elemento existe
    if (s.count(5)) { // Retorna 1 se existe, 0 se não
        cout << "O elemento 5 existe no set." << endl;
    }

    // find() retorna um iterador para o elemento, ou s.end() se não encontrar
    auto it_set = s.find(20);
    if (it_set != s.end()) {
        cout << "Elemento 20 encontrado!" << endl;
    }

    // Para ver o Primeiro elemento (o menor de todos)
    int primeiro_elemento = *s.begin();
    cout << "O primeiro elemento (menor) do set é: " << primeiro_elemento << endl;

    // Para ver o Último elemento (o maior de todos)
    // s.rbegin() é um iterador reverso que aponta para o maior elemento
    int ultimo_elemento = *s.rbegin();
    cout << "O último elemento (maior) do set é: " << ultimo_elemento << endl;

    // Para ver um elemento em uma posição "N" (ex: o segundo elemento, na posição 1)
    int posicao_desejada = 1; // 0 é o primeiro, 1 é o segundo...
    if (s.size() > posicao_desejada) {
        auto it_posicao = std::next(s.begin(), posicao_desejada);
        cout << "O elemento na posicao " << posicao_desejada << " do set é: " << *it_posicao << endl;
    }


    // Map
    map<string, int> m;

    m["banana"] = 10;   // Adiciona/atualiza o par {"banana", 10}
    m.insert(make_pair("laranja", 20)); // Outra forma de inserir
    cout << "Valor associado a 'banana': " << m["banana"] << endl; // Acessa o valor pela chave

    // Itera sobre o map (chaves estarão em ordem alfabética: banana, laranja, maca)
    for (auto const& [chave, valor] : m) {
        cout << "- Chave: " << chave << ", Valor: " << valor << endl;
    }

    m.erase("maca"); // Remove o par com a chave "maca"


    // Assim como o set, o map não tem acesso por índice numérico
    // m.begin() aponta para o par chave-valor com a menor chave (ordem alfabética/numérica)
    // Para ver o Primeiro par (chave/valor)
    auto it_primeiro = m.begin();
    cout << "O primeiro par do map é: Chave='" << it_primeiro->first << "', Valor=" << it_primeiro->second << endl;

    // Para ver o par em uma posição "N" (ex: o terceiro par, na posição 2)
    int posicao_desejada = 2;
    if (m.size() > posicao_desejada) {
        auto it_posicao = std::next(m.begin(), posicao_desejada);
        cout << "O par na posicao " << posicao_desejada << " do map é: Chave='" << it_posicao->first << "', Valor=" << it_posicao->second << endl;
    }


    // Multiset
    multiset<int> ms;

    ms.insert(10);
    ms.insert(10); // Adiciona 10 novamente
    ms.insert(10); // Adiciona 10 uma terceira vez
    ms.size(); // Retorna tamanho do multimap

    // Itera e imprime (elementos ordenados: 5, 10, 10, 10, 20)
    for (int elemento : ms) {
        cout << " " << elemento;
    }

    ms.erase(10); //  Remove TODAS as ocorrências do valor 10

    // Para remover apenas uma ocorrência, use um iterador
    ms.insert(30);
    auto it_ms = ms.find(30); // Encontra a primeira ocorrência de 30
    if (it_ms != ms.end()) {
        ms.erase(it_ms); // Remove apenas o elemento apontado pelo iterador
    }


    // Multimap
    multimap<string, int> mm;

    // No multimap, não se pode usar o operador [], pois ele não saberia
    // qual valor acessar se houvesse chaves duplicadas. Use insert()
    mm.insert(make_pair("aluno", 10));
    mm.insert(make_pair("professor", 9));
    mm.insert(make_pair("aluno", 8)); // Chave "aluno" duplicada 
    mm.count("aluno"); // Conta número de valores para chave
    mm.erase("professor"); // Remove todos os pares com a chave "professor".
    // it->first é a chave, it->second é o valor

    return 0;
}