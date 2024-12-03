#include <bits/stdc++.h>
using namespace std;

// complexidade das operacoes: O(1)

int main() {
    ios_base::sync_with_stdio(false);

    stack<int> pilha;

    // adiciona elementos ao topo da pilha
    pilha.push(1);
    pilha.push(2);

    // remove o elemento no topo
    pilha.pop();

    // olha o elemento no topo da pilha
    int topo = pilha.top();

    cout << topo;

    cin.tie(NULL);
}