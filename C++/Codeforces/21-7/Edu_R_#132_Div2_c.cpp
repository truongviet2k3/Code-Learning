#include <bits/stdc++.h>

#define swap(a,b) {int t = a, a = b, b = t;}
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
    int t;
    string str;
    cin >> t;
    while (t--) {
        cin >> str;
        int len = str.length();
        if(len&1) {
            cout << "NO" << '\n';
        }
        else {
            while(str.find("()")) {
                s.erase(str.find("()"), 2);
            }
            while(str.find("??")) {
                s.erase(str.find("??"), 2);
            }
            for(int i = 0; i < len; i++) {
                
            }
        }
    }
    return 0;
}