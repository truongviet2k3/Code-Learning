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
    int t, x, arr[4], d, i;
    cin >> t;
    while(t--) {
        cin >> x;
        for(i = 1; i <= 3; i++) {
            cin >> arr[i];
        }
        d = 0;
        while(x != 0) {
            x = arr[x];
            d ++;
        }
        if(d == 3) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}