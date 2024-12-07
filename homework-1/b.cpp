#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c;
    string st = "C";
    stack<char> s;

    while (cin >> c) {
        if(c == 'C') {
            if(s.size() < 2) {
                s.push(c);
            }
            else {
                st = "C";
                for (int i=0; i<2; i++) {
                    st += s.top();
                    s.pop();
                }
                if (st != "CBA") {
                    s.push(st[2]);
                    s.push(st[1]);
                    s.push(c);
                }
            }
        }
        else {
            s.push(c);
        }
    }

    string result;
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    reverse(result.begin(), result.end());

    cout << result;
}