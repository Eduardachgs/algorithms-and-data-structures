#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s;
    cin >> s;
    vector<long long> v(s);
    
    for (int i=0; i<s; i++) {
        cin >> v[i];
    }

    long long ans = v[0];
    long long currMax = v[0];

    for (int i=1; i<s; i++) {
        currMax = max(currMax + v[i], v[i]);
        ans = max(ans, currMax);
    }

    cout << ans;
}