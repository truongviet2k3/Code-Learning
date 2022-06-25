// Input: Nhap so kW dien
// Output: In ra so tien dien phai tra

#include <stdio.h>

#define GIA_1 500//0 - 100kW
#define GIA_2 800//100kW - 250kW
#define GIA_3 1000//250kW - 350kW
#define GIA_4 1500// > 350kW

int main() {
    unsigned int so_kW, tong_tien;
    printf("Nhap so kW tieu thu: "); scanf("%u", &so_kW);
    if(so_kW <= 100) {
        tong_tien = so_kW * GIA_1;
    }
    else if( 100 < so_kW && so_kW <= 250) {
        tong_tien = 100 * GIA_1 + (so_kW - 100)* GIA_2;
    }
    else if(250 < so_kW && so_kW <= 350) {
        tong_tien = 100 * GIA_1 + 150 * GIA_2 + (so_kW - 250)* GIA_3;
    }
    else {
        tong_tien = 100 * GIA_1 + 150 * GIA_2 + 100 * GIA_3 + (so_kW - 350) * GIA_4;
    }
    printf("Chi phi :%u", tong_tien);

    return 0;
}