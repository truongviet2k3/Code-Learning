#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a, int b) {
    return a < b ? a : b;
}
int arr[MAX];
int t, n, c1, c2;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        c1 = c2 = 0;
        cin >> n;
        for(int i = 1; i <= n; i++) 
            cin >> arr[i];
        if(n%1) {
            for(int i = 2; i <= n; i+= 2) {
                int kt = (max(arr[i-1], arr[i+1]) + 1) - arr[i];
                if(kt > 0) c1 += kt;
            }
            cout << c1 << '\n';
        }
        else {
            for(int i = 2; i < n; i ++) {
                int kt = (max(arr[i-1], arr[i+1]) + 1) - arr[i];
                
            }
            cout << min(c1, c2) << '\n';
        }
    }
    return 0;
}