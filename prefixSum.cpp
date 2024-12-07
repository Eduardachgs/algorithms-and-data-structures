#include <bits/stdc++.h>
using namespace std;

// build O(N)
// query O(1)

void buildPrefix(int arr[], int n, int prefixSum[]) {
    prefixSum[0] = arr[0];
    cin.tie(NULL);

    for(int i=1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
}

// soma dos indices l a r
int getSum(int l, int r, int ps[]) {
    if (l==0) {
        return ps[r];
    }
    return ps[r] - ps[l-1];
}

int main() {
    ios_base::sync_with_stdio(false);

    int arr[] = {10, 4, 16, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pf[4];
    pf[0] = arr[0];    
    for (int i=1; i<n; i++) {
        pf[i] = pf[i-1] +arr[i];
    }

}