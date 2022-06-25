#include <stdio.h>

int main() {
<<<<<<< HEAD
    int n, k, count = 0;
    int score[51];
    scanf("%d %d", &n, &k);
    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }  
    i = 0;
    while (k > 1 && i < n) 
    {
        if(score[i] > 0 ) {
            count ++;
            k--;
            i++;
        }
        else {
            printf("%d", count);
            return 0;
        };
    }
    printf("%d\n", i);
    while(k == 1) {
        if(score[i] > 0 && score[i] > score[i+1]) {
            count ++;
            k --;
        }
        else{
            for(;i < n; i++) {
                if(score[i] == score[i+1] && score[i] > 0) {
                count ++;
            }
        } 
        
    }
    }
   
    printf("%d", count);
    return 0;
}
=======
    int p, a, max = 0, result = 0;
    for(p = 2; p <= 1000; p+= 2) {
        int count = 0;
        for(a = 1; a < p/3 ; a++) {
            if(p * (p - a ) % 2*(p - 2*a) == 0) {
                count ++;
            }
        }
        if(count > max) {
            max = count;
            result = p;
        }
    }
    printf("%d\n", result);
    printf("%d", max);

    return 0;
}
>>>>>>> 753324029adffb4a70730de85aef58037c6a93d6
