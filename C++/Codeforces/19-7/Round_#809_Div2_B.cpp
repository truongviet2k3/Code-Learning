#include <bits/stdc++.h>

#define rep(i, a, b) for(int i = (a); i <= (b); i++)
using namespace std;
#define MAX 1e5+1
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // vector<int> ip(MAX);
    // vector<int> op(MAX);
    int t, n, i, j;
    cin >> t;
    while(t--) { 
        cin >> n;
        vector<int> ip(n+1);
        vector<int> op(n+1);
        rep(i, 1, n)
            cin >> ip[i];
        rep(i, 1, n) {
            if(op[ip[i]]) continue;
            int count = 1, cur = i, dis;
            for(j = i+1; j <= n; j++) {
                if(ip[i] == ip[j]) {
                    dis = j - cur;
                    cur = j;
                    if(dis % 2) count++;
                }
            }
            op[ip[i]] = count;
        }
        rep(i, 1, n) 
            cout << op[i] << " ";
        cout << "\n";
    }
    return 0;
}