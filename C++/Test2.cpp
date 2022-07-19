#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> arr) {
    int s = 0;
    for(int i = 0; i < arr.size(); i++) {
        s += arr[i];
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sum(arr) << endl;
    return 0;
}