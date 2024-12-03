#include <bits/stdc++.h>
using namespace std;

// priority queue sempre mantem o elemento de maior prioridade no topo
// complexidade: O(log n)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int> pq;

    // adiciona elementos
    pq.push(9);
    pq.push(2);
    pq.push(10);

    // remove o elemento da frente (de maior prioridade)
    pq.pop();

    int maior = pq.top();

    cout << maior;

}