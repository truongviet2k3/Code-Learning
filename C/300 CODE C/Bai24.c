// Input: Nhap vao so tu nhien n
// Output: Co bao nhieu chu so, chu so cuoi cung, chu so dau tien, tong cac chu so, tim so dao nguoc

#include <stdio.h> 

int main() {
    unsigned long int n, m;
    printf("Nhap n: "); scanf("%lu", &n);
    int arr[20];
    int so_chu_so =0, i=0, sum = 0;
    m = n;
    while (n > 0)
    {
        arr[so_chu_so] = n % 10;
        n = n /10;
        so_chu_so ++;
    }
    printf("%lu co %d chu so", m ,so_chu_so);
    printf("\nChu so cuoi cung la: %d", arr[0]);
    printf("\nChu so dau tien la: %d", arr[so_chu_so -1]);
    for (i = 0 ; i < so_chu_so; i++) {
        sum += arr[i];
    }
    printf("\nTong cac chu so la: %d", sum);
    printf("\nSo dao nguoc la: ");
    for (i = 0; i < so_chu_so -1 ; i ++) {
        printf("%d",arr[i]);
    }
    if(arr[so_chu_so-1] != 0) {
        printf("%d",arr[so_chu_so-1]);
    }
    return 0;
}