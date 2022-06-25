// Input: Diem chuan hoi dong, diem 3 mon thi, khu vuc cua thi sinh, doi tuong du thi
// Output: Do hay truot

#include <stdio.h>
#include <math.h>

int main() {
    float diem_chuan, mon1, mon2 , mon3, tong_diem;
    char kv;
    int doi_tuong;
    printf("Nhap diem chuan: "); scanf("%f",&diem_chuan);
    printf("Nhap diem 3 mon thi: "); scanf("%f %f %f" , &mon1, &mon2, &mon3);
    printf("Nhap khu vuc (A, B, C, X): "); scanf("%s", &kv);
    printf("Nhap doi tuong (1, 2, 3, 0): "); scanf("%d", &doi_tuong);
    tong_diem = mon1 + mon2 + mon3;
    switch (kv)
    {
    case 'A':
        tong_diem += 2;
        break;
    case 'B':
        tong_diem += 1;
        break;
    case 'C':
        tong_diem += 0.5;
        break;
    default:
        break;
    }
    switch (doi_tuong)
    {
    case 1:
        tong_diem += 2.5;
        break;
    case 2:
        tong_diem += 1.5;
        break;
    case 3:
        tong_diem += 1;
        break;
    default:
        break;
    }
    (tong_diem >= diem_chuan) ? printf("Do [%.1f]", tong_diem) : printf("Rot [%.1f]", tong_diem); 
    return 0;
}
