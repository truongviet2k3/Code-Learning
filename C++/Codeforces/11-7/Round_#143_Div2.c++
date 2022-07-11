#include <iostream>
using namespace std;

int main() {
    int n, i, j, s, count = 0;
    cin >> n;
    int arr[1000][3];
    for(i = 0; i < n; i++) 
        for(j = 0; j < 3; j++) 
            cin >> arr[i][j];
    for(i = 0; i < n; i++) {
        s = arr[i][0] + arr[i][1] +arr[i][2];
        if(s > 1) {
            count ++;
        }
    }
    cout << count;
    return 0;
}