#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int find_answer(int wheels, int num_wheel[], int len[], string str[]) {
    int i, j;
    for(i = 0; i < wheels; i++) {
        for(j = 0; j < len[i]; j++) {
            switch (str[i][j]) {
                case 'U':
                    num_wheel[i] --;
                    break;
                case 'D':
                    num_wheel[i] ++;
                    break;
            }
        }
        printf("%d ", (num_wheel[i] + 10) % 10);
    }
    return 0;
}
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
    for(i = 0; i < n; i++) {
        find_answer(wheels[i], num_wheel[i], len[i], str[i]);
        putchar('\n');
    }
    return 0;
}