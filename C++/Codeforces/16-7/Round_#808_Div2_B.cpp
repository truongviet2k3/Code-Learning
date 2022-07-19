#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n, l , r, i;
    bool kt;
    cin >> t;
    while (t--) {
        kt = 1;
        cin >> n >> l >> r;
        vector<int> arr(n+1);
        for(i = 1; i <= n; i++) {
            int k = (r/i)*i;
            if(k < l) {
                cout << "NO\n";
                kt = 0;
                break;
            }
            arr[i] = k;
        }
        if(kt) {
            cout << "YES\n";
            for(i = 1; i <= n; i++) {
                cout << arr[i] << " ";
            }
            putchar('\n');
        }
    }
    return 0;
}