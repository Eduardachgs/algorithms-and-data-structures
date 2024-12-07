#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, le, cars, cl;
    string s;
    int count = 0;
    int sum = 0;

    queue<int> l;
    queue<int> r;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> le;
        le = le * 100;
        cin >> cars;

        for (int j=0; j<cars; j++) {
            cin >> cl;
            cin >> s;
            if (cl <= le)  {
                if (s == "right")
                    r.push(cl);
                else
                    l.push(cl);
            }
        }

        while (r.size() || l.size()) {
            if (l.size() > 0) {
                while ((sum + l.front()) < le && l.size()) {
                    sum += l.front();
                    l.pop();
                }
                sum = 0;
                count++;
            }

            else if (l.size() == 0 && r.size() > 0) {
                count++;
            }

            if (r.size() > 0) {
                while ((sum + r.front()) < le && r.size()) {
                    sum += r.front();
                    r.pop();
                }
                sum = 0;
                count++;
            }

            else if (r.size() == 0 && l.size() > 0) {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
}

/*

4
20 4
380 left
720 left
1340 right
1040 left
15 4
380 left
720 left
1340 right
1040 left
15 4
380 left
720 left
1340 left
1040 left
15 4
380 right
720 right
1340 right
1040 right
*/
