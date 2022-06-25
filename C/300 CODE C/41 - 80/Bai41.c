#include <stdio.h>

float f(float x, float y, int o) {
    switch (o)
    {
    case 1:
        return x + y;   
    case 2:
        return x - y;
    case 3:
        return x * y;
    case 4:
        return x / y;
    }
}

int main() {
    int a, b, c, d ,e;
    int check;
    char op[5] = {' ', '+', '-', '*', '/'};
    for(a = 1; a <= 4; a++) {
        for ( b = 1; b <= 4; b++) {
            for(c = 1; c <= 4; c++) {
                for(d = 1; d <= 4; d++) {
                    for(e = 1; e <= 4; e++) {
                        check = 36 - f(f(f(f(f(1, 2, a),3 ,b), 4, c), 5, d), 6, e);
                        if(!check) {
                            printf("((((1 %c 2) %c 3) %c 4) %c 5) %c 6 = 36\n", op[a], op[b], op[c],op[d],op[e]);
                        } 
                    }
                }
            }
        }
        
    }
    return 0;
}