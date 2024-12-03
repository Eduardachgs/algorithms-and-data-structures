#include <bits/stdc++.h>

using namespace std;

// É um array dinanmico, nao possui tamanho fixo
// complexidade das operacoes: O(1)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v; // cria um vetor vazio

    v.push_back(4); // adiciona ao final
    v.pop_back(); // remove o elemento do final

    vector<int> v1 (10, -1); // vetor de tamanho 10 com -1s

    v[0] = 0; // acessamos vector como uma array

    cout << v[0];

}