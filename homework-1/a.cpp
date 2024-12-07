#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, num;
    cin >> n;
    vector<int> v;

    for (int i=0; i<n; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int first = v[n-1];
    int j = n-2;

    while(v[j] == first) {
        j--;
    }

    cout << v[j];

    cin.tie(NULL);
}