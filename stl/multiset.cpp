#include <bits/stdc++.h>
using namespace std;

// mantem elementos repetidos
// O(log n)

int main() {
    ios_base::sync_with_stdio(false);

    multiset<int> ms;

    // inserir elementos
    ms.insert(2);
    ms.insert(3);
    ms.insert(9);
    ms.insert(9);

    bool esta = ms.find(2) != ms.end(); // find retorna um ponteiro, retorna para end caso o elemento nao exista

    // conta quantas vezes um elemento aparecer (nao usar, O(N))
    int qtd = ms.count(9);

    // apagar elemento
    ms.erase(ms.find(3));
    ms.erase(9); // apaga todas as ococrrencias desse elemento

    cin.tie(NULL);
}