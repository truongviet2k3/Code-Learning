// Input: Nhap vao lai suat/nam, tien von, thoi han
// Output: In tong tien sau tung nam

#include <stdio.h>
#include <math.h>

int main() {
    int  tien_von, thoi_han;
    double lai_suat;
    printf("Nhap lai suat(%), tien von, thoi han: "); scanf("%lf%d%d", &lai_suat, &tien_von, &thoi_han); 
    printf("Lai suat: %d%%\n", lai_suat);
    printf("Von ban dau: %d\n", tien_von);
    printf("Thoi han: %d\n", thoi_han);
    printf("Nam             Von\n");
    int i,j; 
    for(i = 1; i <= thoi_han; i++) {
        double tong_tien = tien_von;
        for(j = 1; j <= i; j++) {
            tong_tien *= 1 + lai_suat / 100;
        }
        printf("%d             %.2lf\n", i, tong_tien);
    }
    return 0;
}