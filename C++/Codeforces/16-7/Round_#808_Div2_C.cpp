#include <bits/stdc++.h>

#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define per(i, a, b) for(int i = (a); i >= (b); i--)
#define odd(x) (x&1)
#define even(x) (!odd(x))

typedef long long ll;
typedef unsigned long long ull;
typedef double db;

using namespace std;
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t, n, q, i;
    string ans = "";
    cin >> t;
    while (t--) 
    {
        ans = "";
        cin >> n >> q;
        vector<int> arr(n);
        int x = 0;
        rep(i, 1, n) 
            cin >> arr[i];
        per(i, n, 1) {
            if(arr[i] <= q) {
                ans += '1';
            }
            else if(arr[i] > q && x < q) {
                ++x;
                ans += '1';
            }
            else 
                ans += '0';
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
    return 0;
}