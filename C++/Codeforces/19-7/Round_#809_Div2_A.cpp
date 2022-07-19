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
    int t, n, m, i;
    int arr[51];
    string str = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    cin >> t;
    while(t--) {
        string str = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
        cin >> n >> m;
        rep(i, 1, n)
            cin >> arr[i];
        rep(i, 1, n) {
            int k = arr[i];
            int j = m + 1 - arr[i];
            if(k < j) {
                if(str[k] == 'B')   
                    str[k] = 'A';
                else str[j] = 'A';
            }
            else if(k > j) {
                if(str[j] == 'B')   
                    str[j] = 'A';
                else str[k] = 'A';
            }
            else 
                str[k] = 'A';
        }
        rep(i, 1, m) 
            cout << str[i];
        cout << "\n";
    }
    return 0;
}