#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, num, w;
    int max = 0;
    set<int> s;

    cin >> n;
    w = 0;

    vector<int> v;
    for (int i=0; i<n; i++) {
        cin >> num;
        if (s.find(num) != s.end()) {
            while (v[w] != num) {
                s.erase(v[w]);
                w++;
            }
            w++;
        }

        v.push_back(num);
        s.insert(num);

        if ((v.size() - w) > max) {
            max = v.size() - w;
        }
    }   
    cout << max;
}