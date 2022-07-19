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
    int n;
    int x = 0;
    cin >> n;
    char str[5];
    while (n--) {
        cin >> str;
        char* ps1 = strstr(str, "++");
        char* ps2 = strstr(str, "--");
        if(ps1) x++;
        else if(ps2) x--;
    }
    cout << x << endl;
    return 0;
}