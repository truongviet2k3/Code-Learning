#include <iostream>
using namespace std;

int main() {
    int t, i, j, len[100], kt;
    unsigned int arr[101][101];
    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> len[i];
        for(j = 0; j < len[i]; j++) 
            cin >> arr[i][j];
    }
    for(i = 0; i < t; i++) {
        kt = 1;
        if (arr[i][0] == 1 || arr[i][1] == 1 || arr[i][1] % arr[i][0] == 1) {
            cout << "YES" << endl;
            continue;
        }
        for(j = 1; j < len[i]; j++) {
            if(arr[i][j] > arr[i][j-1]) {
                int r = arr[i][j] % arr[i][j-1] ;
                if(r == 0) arr[i][j] = arr[i][j-1];
                else 
                    arr[i][j] = r;
            }
            // for(j = len[i] - 1; j >= 1 ; j--) {
            // if(arr[i][j] > arr[i][j-1]) {
            //     int d = arr[i][j] / arr[i][j-1], r = arr[i][j] % arr[i][j-1] ;
            //     if(r == 0) d-= 1;
            //     arr[i][j] = arr[i][j] - arr[i][j-1] * d;
            // }   
            // }
            if(j == 1) continue;
            if(arr[i][j] < arr[i][j-1]) {
                    cout << "NO" << endl;
                    kt = 0;
                    break;
            }
        }
        if(kt) cout << "YES" << endl;
    }
    return 0;
}