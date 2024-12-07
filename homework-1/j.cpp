#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool reverse = 0;
    int n, num;
    string s;
    cin >> n;

    deque<int> dq;

    for (int i=0; i<n; i++) {
        cin >> s;

        if (s == "reverse") {
            reverse = !reverse;
        }

        else{

            if (!reverse)  {
                if (s == "push_back") {
                    cin >> num;
                    dq.push_back(num);
                }
                else if (s == "toFront") {
                    cin >> num;
                    dq.push_front(num);
                }
                else {
                    if (dq.empty()) {
                        cout << "No job for Ada?" << endl;
                    }
                    else {
                        if (s == "front") {
                            num = dq.front();
                            dq.pop_front();
                            cout << num << endl;
                        }
                        else {
                            num = dq.back();
                            dq.pop_back();
                            cout << num << endl;
                        }
                    }
                }
            }

            else {
                if (s == "push_back") {
                    cin >> num;
                    dq.push_front(num);
                }
                else if (s == "toFront") {
                    cin >> num;
                    dq.push_back(num);
                }
                else {
                    if (dq.empty()) {
                        cout << "No job for Ada?" << endl;
                    }
                    else {
                        if (s == "front") {
                            num = dq.back();
                            dq.pop_back();
                            cout << num << endl;
                        }
                        else {
                            num = dq.front();
                            dq.pop_front();
                            cout << num << endl;
                        }
                    }
                }
            }
            }

        }
}