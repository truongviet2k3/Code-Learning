#include <iostream>
#include <string.h>
using namespace std;

int check_str(string str[], int len) {
    int i ,j ,k, len_i, len_j, len_k, kt = 0;
    for(i = 0; i < len; i++) {
        kt = 0;
        len_i = str[i].length();
        for(j = 0; j < len; j++) {
            len_j = str[j].length();
            if(len_j > len_i ) continue;
            for(k = 0; k < len; k++) {
                len_k = str[k].length();
                if(len_j + len_k > len_i) continue;
                if(str[k] + str[j] == str[i]) {
                    kt = 1;
                    cout << kt;
                    break;
                }
            }
            if(kt == 1) break;
        }
        cout << 0;        
    }
    return 0;
}
int main() {
    int n, i, j;
    int *len = new int[10000]; 
    string str[100][100];
    cin >> n;  
    for(i = 0; i < n; i++) {
        cin >> len[i];
        for(j = 0; j < len[i]; j++) 
            cin >> str[i][j];
    }
    for(int i = 0; i < n; i++) {
        check_str(str[i], len[i]);
        putchar('\n');
    }
    delete[] len;
    return 0;
}