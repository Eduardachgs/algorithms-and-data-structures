#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, b, e, sum;
    string v;

    cin >> n;
    cin >> q;
    cin >> v;

    vector<int> ps(n, 0);
    ps[0] = 0;
    for (int i=1; i<n; i++) {
        ps[i] = ps[i-1] + (v[i-1] == v[i]);
    }

    for (int i=0; i<q; i++) {
        cin >> b;
        cin >> e;
        b--;
        e--;

        if (b==0) {
            sum = ps[e];
        }
        else {
            sum = ps[e] - ps[b];
        }
        cout << sum << endl;
    }
}