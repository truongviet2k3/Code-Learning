#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string  str[100][100];
    int n, i, j, wheels[100], num_wheel[100][100], len[100][100];
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> wheels[i];
        for(j = 0; j < wheels[i]; j++) {
            cin >> num_wheel[i][j];
        }
        for(j = 0; j < wheels[i]; j++) {
            cin >> len[i][j];
            cin >> str[i][j];
        }
    }
    return 0;
}