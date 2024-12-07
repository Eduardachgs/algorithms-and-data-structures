#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; // number of toys
    long long a, b, toy;
    toy = -1;
    bool finish = 0;

    cin >> n;
    priority_queue<long long> toys;
    priority_queue<long long> boxes;

    for (int i=0; i<n; i++) {
        cin >> a;
        toys.push(a);
    }

    for (int j=0; j<(n-1); j++) {
        cin >> b;
        boxes.push(b);
    }

    for (int k=0; k<n; k++) {
        if (boxes.empty()){
            cout << toys.top();
            finish = 1;
        }

        else if (toys.top() <= boxes.top()) {
            toys.pop();
            boxes.pop();
        }

        else {
            if (toy != -1) {
                cout << -1;
                k = n - 1;
                finish = 1;
            }
            else {
                toy = toys.top();
                toys.pop();
            }
        }
    }
    if (!finish) {
        cout << toy;
    }
}