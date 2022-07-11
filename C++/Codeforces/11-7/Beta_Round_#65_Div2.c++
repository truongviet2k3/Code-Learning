#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i, len;
    char str[100][255];
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> str[i];
    }
    for(i=0; i<n; i++) {
        len = strlen(str[i]);
        if(len > 10) {
            if(len == 11) {
                str[i][1] = '9';
                str[i][2] = str[i][len-1];
                str[i][3] = '\0';
            }
            else {
                str[i][1] = '0' + (len - 2) / 10; 
                str[i][2] = '0' + (len - 2) % 10;
                str[i][3] = str[i][len-1];
                str[i][4] = '\0';
            }
        }
    }
    for(i = 0; i < n; i++) {
        cout << str[i] << '\n';
    }
    return 0;
}