#include <stdio.h>
//Truong Quang Viet - 5515
int main() {
    int a,b, UCLN, BCNN; //Khai bao a, b, UCLN va BCNN 
    scanf("%d%d", &a, &b);//Nhap a va b
    if(a <= 0 || b <= 0) {//Neu a <= 0 hoac b <= 0
        printf("ERROR"); //In ra man hinh 
        return 0; //Ket thuc chuong trinh
    }
    int a1 = a, b1 = b; //Tao bien phu a1 = a va b1 = b
        while(a1 != b1) {//Dung vong lap while dk: a khac b
            if(a1 > b1) //Neu a1 > b1
                a1 -= b1;//Tinh a1 
            else //Nguoc lai
                b1 -= a1;//Tinh b1 
        }
    UCLN = a1;//Tinh UCLN 
    BCNN = a*b/UCLN;//Tinh BCNN
    printf("%d\n%d", UCLN, BCNN); //In ket qua ra man hinh
    return 0;
}