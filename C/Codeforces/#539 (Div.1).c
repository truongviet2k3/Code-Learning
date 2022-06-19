#include <stdio.h>

void queries_1(int arr* [],int l, int r, int x) {
    int i;
    for(i= l-1 ; i < r; i++) {
        *(&arr[i]) *= x;
    }
}
void queries_2(int arr*[], int p, int x) {
    *(arr[p-1]) *= x; 
}
int queries_3(int arr[], int l, int r) {
    int sum = 0, i;
    for (int i=l-1; i < r) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size, modulo;
    printf("%d%d", &size, &modulo);
    int i, arr[size];
    for (i=0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    int queries;
    printf("%d", &queries);
    int query[queries][5];
    

}