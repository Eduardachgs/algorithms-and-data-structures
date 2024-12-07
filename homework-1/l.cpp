#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, w;
    int j1, j2, j3;
    string word;

    unordered_set<string> s1, s2;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> w;
        j1 = j2 = j3 = 3*w;

        for (int j=0; j<3; j++) {
            for (int k=0; k<w; k++) {
                if (j == 0) {
                    cin >> word;
                    s1.insert(word);
                }

                else if (j == 1) {
                    cin >> word;
                    s2.insert(word);
                    if (s1.find(word) != s1.end()) {
                        j1 -= 2;
                        j2 -= 2;
                    }
                }

                else {
                    cin >> word;
                    if ((s1.find(word) != s1.end()) && (s2.find(word) != s2.end())) {
                        j1 -= 1;
                        j2 -= 1;
                        j3 -= 3;
                    }
                    else if (s1.find(word) != s1.end()) {
                        j1 -= 2;
                        j3 -= 2;
                    }
                    else if (s2.find(word) != s2.end()) {
                        j2 -= 2;
                        j3 -= 2;
                    }
                }
            }
        }
        s1.clear();
        s2.clear();
        cout << j1 << " " << j2 << " " << j3 << endl;

    }

}
