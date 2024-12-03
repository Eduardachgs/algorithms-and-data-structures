#include <bits/stdc++.h>
using namespace std;

// complexidade: O(1)

int main() {
    ios_base::sync_with_stdio(false);

    queue<int> fila;

    // adiciona um elemento no FINAL da fila
    fila.push(1);
    fila.push(2);
    fila.push(3);

    // remove elemento na FRENTE da fila
    fila.pop();

    // ve o elemento que esta na FRENTE da fila
    int frente = fila.front();

    cout << frente;

    cin.tie(NULL);
}