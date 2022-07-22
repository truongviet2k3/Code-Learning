#include <bits/stdc++.h>

int const MAX = 1e5+1;
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}
int n, m, a, b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<int> arr(n+1);
    vector<long long> B(n+1), C(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        B[i] = B[i-1] + max(0, arr[i-1] - arr[i]);
    }
    for(int i = n; i > 0; i--) {
        C[i] = C[i + 1] + max(0, arr[i+1] - arr[i]);
    }
    while(m--) { 
        cin >> a >> b;
        if(a < b) {
            cout << B[b] - B[a] << endl;
        } 
        else {
            cout << C[b] - C[a] << endl;
        }
    }
    return 0;
}