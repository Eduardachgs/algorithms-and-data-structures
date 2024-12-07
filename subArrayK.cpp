#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;

    unordered_map<int, int> prefixSums;

    int sum;
    int ans = 0;
    int currSum = 0;

    for (int i=0; i<v.size(); i++) {
        currSum += v[i]; // incrementamos a soma com o valor do indice atual


        // verificamos se a soma atual corresponde a k
        if (currSum == sum) {
            ans++;
        }

        // se nao, verificamos se a diferença entre currSum e sum existe no hashmap
        if (prefixSums.find(currSum - sum) != prefixSums.end()) {
            ans += prefixSums[currSum - sum];
        }

        // adicionamos a soma atual ao conjunto de somas prefixas
        prefixSums[currSum]++;

    }

    return ans;

}