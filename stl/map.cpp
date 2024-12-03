#include <bits/stdc++.h>
using namespace std;

// O(log N)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> mapa;

    mapa["TFG"] = 234;
    mapa["P"] = 234;

    // é possivel iterar por um map assim:
    for (auto [key, value] : mapa)
        cout << key << " - " << value << endl;

}