#include <stdio.h>

int main() {
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