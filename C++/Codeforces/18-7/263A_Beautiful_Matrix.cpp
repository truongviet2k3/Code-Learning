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
    int arr[6][6];
    int i, j, a, b, res = 0;
    rep(i, 1, 5) 
        rep(j, 1, 5) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                a = i;
                b = j;
            }    
        }
    res = abs(a - 3) + abs(b - 3);
    cout << res << endl;
    return 0;
}