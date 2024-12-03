#include <bits/stdc++.h>
using namespace std;

// mantem os elementos ordenados, podemos adicionar, remover elementos e verificar se um elemento existe
// O(log n)
int main() {
    ios_base::sync_with_stdio(false);

    set<int> conjunto;

    // insere elemento no conjunto
    conjunto.insert(10);
    conjunto.insert(1);
    conjunto.insert(1); // nao mantem elementos repetidos

    // verifica se um elemento está no conjunto
    bool esta5 = conjunto.count(5);
    bool esta1 = conjunto.find(1) != conjunto.end();

    // apaga um elemento do conjunto
    conjunto.erase(1);

    cin.tie(NULL);
}