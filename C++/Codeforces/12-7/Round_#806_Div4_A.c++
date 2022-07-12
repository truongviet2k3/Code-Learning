#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    string str[1000];
    for(i = 0; i < n; i++) 
        cin >> str[i];
    for(i = 0; i < n; i++) 
        for(auto & c: str[i]) c = toupper(c);
    for(i = 0; i < n; i++) {
        if(str[i] == "YES") 
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0; 
}