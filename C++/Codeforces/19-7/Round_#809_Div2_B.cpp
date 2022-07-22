#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e+5;

int A[MAX], ans[MAX], prv[MAX];
int t, n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while(t--) { 
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cin >> A[i];
            ans[i] = prv[i] = 0;
        }
        for(int i = 1; i <= n; i++) {
            if(!prv[A[i]]) {
                prv[A[i]] = i;
                ans[A[i]] = 1;
            }
            else {
                ans[A[i]] += (i - prv[A[i]])&1;
                prv[A[i]] = i;
            }
        }
        for(int i = 1; i <= n; i++) 
            cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}