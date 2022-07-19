#include <iostream>
using namespace std;

int main() {
    int t, i, len, kt;
    unsigned int arr[101];
    cin >> t;
    while(t--) {
        kt = 1;
        cin >> len;
        for(i = 0; i < len; i++) 
            cin >> arr[i];
        for(i = 1; i < len; i++) {
            if(arr[i] % arr[0]) {
                kt = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if(kt) cout << "YES" << endl;
    }
    return 0;
}