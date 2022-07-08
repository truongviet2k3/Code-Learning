#include <stdio.h>
#include <string.h>
int str_to_num(char* str) {
    int k, = 1, num = 0, i, len = strlen(str);
    for(i = len-1; i >=0; i--) {
        k *= 10;
        num += str[i]*k

    }

}

int main() {

    return 0;
}