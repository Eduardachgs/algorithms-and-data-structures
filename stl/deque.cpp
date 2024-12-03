#include <bits/stdc++.h>
using namespace std;

// complexidade: O(1)

int main() {
    ios_base::sync_with_stdio(false);

    deque<int> dq;

    // adiciona elementos no fim ou no inicio
    dq.push_back(1);
    dq.push_front(2);

    // remove elementos no fim ou no inicio
    dq.pop_back();
    dq.pop_front();

    // pode ser acessado como um array
    dq[0] = 12;

    cin.tie(NULL);
}