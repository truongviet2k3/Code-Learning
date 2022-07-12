#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[100];
    int n, i, j, len[100], d, s;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> len[i];
        cin >> str[i];
    }
    for(i = 0; i < n; i++) {
        int arr[27] = { 0 };
        s = 0;
        for(j = 0; j < len[i]; j++) {
            d = str[i][j] - 64;
            // cout << d << endl;
            arr[d]++;
        }
        for(j = 1; j <= 26; j++) {
            if(arr[j] > 0) {
            s += arr[j] + 1;
            }
        }
        cout << s << endl; 
    }
    return 0;
}