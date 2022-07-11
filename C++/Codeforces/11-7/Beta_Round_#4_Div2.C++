#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n % 2 || n <= 0 || n > 100) cout << "NO";
    else cout << "YES";
    return 0; 
}