// Input: Nhap vao 2 thoi diem t1 t2
// Output: In ra thoi gian giua 2 thoi diem t1 t2

#include <stdio.h>

int main() {
    unsigned int h1, m1, s1, h2, m2, s2;
    int h3, m3, s3;
    printf("Nhap gio, phut, giay [1]: "); scanf("%u%u%u", &h1, &m1, &s1);
    printf("Nhap gio, phut, giay [2]: "); scanf("%u%u%u", &h2, &m2, &s2);
    h3 = h2 - h1; 
    m3 = m2 - m1;
    s3 = s2 - s1;
    if(s3 < 0) {
        s3 += 60;
        m3 -= 1;
    }
    if(m3 < 0) {
        m3 += 60;
        h3 -= 1;
    }
    printf("Hieu thoi gian: %d gio %d phut %d giay", h3, m3, s3);
    return 0;
}