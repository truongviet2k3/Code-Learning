#include <stdio.h>
#include <math.h>
//Truong Quang Viet - 5515

int bai4_01() {
    printf("De bai: \n");
    printf("Nhap so nguyen khong am n voi n < 8\n");
    printf("In ra ket qua giai thua cua n (n!)\n");
    printf("Neu du lieu dau vao khong dung in ra ERROR\n");
    int n, i, giai_thua = 1;//Khai bao cac so nguyen
    printf("\nNhap n: "); scanf("%d", &n);//Nhap n
    if(n < 0 || n >= 8) { //Neu n < 0 hoac n >=8 
        printf("ERROR"); //In ra man hinh ERROR
        return 0; // Ket thuc ham
    }
    if(n == 0 )  //Neu n = 0 
        giai_thua = 1; //Gan giai thua = 1
    else //Nguoc lai neu n khac 0
        for(i = 1; i <= n; i++) //Vong lap for i:1->n, kc: 1
            giai_thua *= i;//Tinh giai thua
    printf("n! = %d", giai_thua);//In ra ket qua n!
    putchar('\n');
    return 0;
}
int bai4_02() {
    printf("De bai: \n");
    printf("Nhap vao mot so nguyen n tu ban phim\n");
    printf("Kiem tra xem n co phai so nguyen to khong?\n");
    int n ,i;//Khai bao n va i
    printf("\nNhap n: ");scanf("%d",&n);//Nhap vao n
    if(n <= 1) {//Neu n <= 1
        printf("Khong phai so nguyen to\n"); //In ra man hinh kpsnt
        return 0;//Ket thuc ham
    } 
    for(i = 2; i < sqrt(n); i++) //Vong lap for i:2->sqrt(n), kc =1
        if(n % i == 0) { //Neu n chia het i
            printf("Khong phai so nguyen to\n"); //In ra man hinh kpsnt
            return 0;//Ket thuc ham
        }
    printf("La so nguyen to\n"); //In ra man hinh lsnt
    return 0;
}
int bai4_03() {
    printf("De bai: \n");
    printf("Nhap vao mot so nguyen duong n < 1000\n");
    printf("Tinh tong cac chu so cua so do va in ket qua ra man hinh\n");
    printf("Neu gia tri nhap vao lon hon hoac bang 1000 thi in ra man hinh ERROR\n");
    unsigned int n, tong = 0; //Khai bao so nguyen duong n va tong = 0 
    printf("\nNhap n: ");scanf("%u", &n); //Nhap n
    if(n >= 1000) {//Neu n>= 1000
        printf("ERROR\n"); //In ra man hinh ERROR
        return 0;//Ket thuc ham
    }
    while (n > 0) { //Vong lap while dk: n > 0
        tong += n % 10;//Tinh tong
        n /= 10; //Tinh n = n/10
    }
    printf("Tong cac chu so: %d\n", tong);//In ra man hinh ket qua tong
    return 0;
}
int bai4_04() {
    printf("De bai: \n");
    printf("Nhao vao hai so nguyen duong a va b\n");
    printf("Tinh UCLN va BCNN cua a, b va in ra man hinh\n");
    printf("Neu du lieu dau vao khong hop le in ra ERROR\n");
    int a,b, UCLN, BCNN; //Khai bao a, b, UCLN va BCNN 
    printf("\nNhap a va b: ");scanf("%d%d", &a, &b);//Nhap a va b
    if(a <= 0 || b <= 0) {//Neu a <= 0 hoac b <= 0
        printf("ERROR"); //In ra man hinh 
        return 0; //Ket thuc ham
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
    printf("UCLN = %d\nBCNN = %d", UCLN, BCNN); //In ket qua ra man hinh
    putchar('\n');
    return 0;
}
int bai4_05() {
    printf("De bai: \n");
    printf("Nhap 3 so a, b, c bat ky\n");
    printf("Giai va bien luan pt bac 2: ax^2 + bx + c = 0\n");
    printf("In ket qua nghiem (neu co) cua phuong trinh\n");
    double a, b, c, denta, x1, x2;//Khai bao cac so thuc a, b, c, denta
    printf("\nNhap 3 so a, b, c: ");scanf("%lf%lf%lf", &a, &b, &c);//Nhap a, b, c
    if(a == 0) {//Neu a = 0 
        if(b == 0)//Neu b = 0
            if(c == 0)//Neu c = 0
                printf("Phuong trinh vo so nghiem");//In ra ket qua
            else //Nguoc lai c khac 0 
                printf("Phuong trinh vo nghiem"); //In ra ket qua
        else //Nguoc lai b khac 0
            printf("Do a = 0, x = %lf", -c/b);//In ra ket qua
        return 0;//Ket thuc chuong trinh
    }
    denta = b*b - 4*a*c; //Tinh denta
    if(denta < 0) {//Neu denta < 0
        double thuc = -b/2/a; //Khai bao phan thuc cua so phuc
        double ao = sqrt(-denta)/2/a;//Khai bao phan ao cua so phuc
        thuc = -b/2/a; //Tinh phan thuc 
        ao = sqrt(-denta)/2/a;//Tinh phan ao
        printf("x1 = %lf+%lfi\n", thuc, ao);//In ra nghiem lon
        printf("x2 = %lf-%lfi", thuc, ao);//In ra nghiem be
    }
    else if(denta == 0) //Neu denta = 0  
        printf("Nghiem kep: x = %lf", -b/2/a);//In ra nghiem kep
    else {//Nguoc lai denta > 0
        x1 = (- b + sqrt(denta)) / 2 / a; //Tinh x1
        x2 = (- b - sqrt(denta)) / 2 / a; //Tinh x2
        printf("x1 = %lf\nx2 = %lf", x1, x2); //In ra nghiem x1 va x2
    }
    putchar('\n');
    return 0;
}
int bai4_06() {
    printf("De bai: \n");
    printf("Nhap vao tu ban phim so nguyen duong n va so thuc x\n");
    printf("Tinh va in ra tong S = 1 + x + x^2 + ... + x^n\n");
    printf("Neu du lieu dau vao khong hop le in ra Error\n");
    int n, i; //Khai bao n va i
    double x, so_hang = 1, tong = 1; //Khai bao x, u va tong
    printf("\nNhap n va x: ");scanf("%d%lf", &n, &x);//Nhap n
    if(n <= 0) {//Neu n <= 0
        printf("Error\n");//In ra Error
        return 0;//Ket thuc chuong trinh
    }
    for(i = 1; i <= n; i++) { //Vong lap for i:1->n, kc =1
        so_hang *= x;//Tinh u
        tong += so_hang;//Tinh tong
    }
    printf("S = %lf\n", tong); //In ra ket qua tong
    return 0;
}
int bai4_07() {
    printf("De bai: \n");
    printf("Nhap vao tu ban phim so nguyen duong n va so thuc x\n");
    printf("Tinh va in ra tong S = 1 - x + x^2 + ... + (-1)^n*x^n\n");
    printf("Neu du lieu dau vao khong hop le in ra Error\n");
    int n, i;//Khai bao n va i
    double x, u = 1, tong = 1;//Khai bao so thuc x, u va tong
    printf("\nNhap vao n va x: ");scanf("%d%lf", &n, &x);//Nhap vao n va x
    if(n <= 0) {//Neu n <= 0 
        printf("Error\n");//In ra Error
        return 0;//Ket thuc chuong trinh
    }
    for(i = 1; i <= n; i++) {//Vong lap for i:1->n, kc = 1
        u = -1 * u * x;//Tinh u
        tong += u;//Tinh tong = tong + u
    }
    printf("S = %lf\n", tong);//In ra ket qua tong
    return 0;
}
int bai4_08() {
    printf("De bai: \n");
    printf("Nhap vao tu ban phim so nguyen duong n va so thuc x\n");
    printf("Tinh va in ra tong S = 1 + x/1 + x^2/2! + ... + x^n/n!\n");
    printf("Neu du lieu dau vao khong hop le in ra Error\n");
    int n, i; //Khai bao n va i
    double x, tu, mau, u , tong;//Khai bao x, tu, mau, u va tong
    printf("\nNhap n va x: ");scanf("%d%lf", &n, &x);//Nhap vao n va x
    if(n <= 0) {//Neu n <= 0
        printf("Error");//In ra Error
        return 0;//Ket thuc chuong trinh
    }
    tu = mau = tong = 1;//Gan 1 cho tu mau tong
    for(i = 1 ; i <= n ; i++)  {//Vong lap for i:1->n, kc = 1
        tu *= x;//Tinh tu
        mau *= i;//Tinh mau
        u = tu/mau;//Tinh u 
        tong += u;//Tinh tong
    }
    printf("S = %lf\n", tong);//In ra ket qua tong
    return 0;
}
int bai4_09() {
    printf("De bai: \n");
    printf("Nhap vao tu ban phim so duong x va so nguyen duong n\n");
    printf("Tinh va in ra tong S = sqrt(x + sqrt(x + ... + sqrt(x))) (n dau can)\n");
    printf("Neu n < 1 or x < 0 in ra Error\n");
    int n, i;//Khai bao n va i
    double x, S ;//Khai bao so thuc x va S
    printf("\nNhap vao x va n: ");scanf("%lf%d", &x, &n);//Nhap vao x va n
    if(n < 1 || x < 0) {//Neu n < 1 or x < 0
        printf("Error");//In ra Error
        return 0; //Ket thuc ham
    }
    S = x; //Gan S = x
    for(i = 2; i <= n; i++) {//Vong lap for i:2->n, kc = 1
        S = x + sqrt(S); //Tinh S
    }
    printf("S = %.4lf\n", sqrt(S)); //In ra ket qua
    return 0;
}
int bai4_10() {
    printf("De bai: \n");
    printf("Nhap vao tu ban phim so duong x va so nguyen duong n\n");
    printf("Tinh va in ra tong S = 1 + x + x^2/2 + ... + x^n/n\n");
    printf("Neu n < 1 or x < 0 in ra Error\n");
    int n, i;//Nhap vao n va i
	double x, tu, mau, u, tong;//Khai bao cac so thuc
	printf("\nNhap vao x va n: ");scanf("%lf%d", &x, &n);//Nhap vao x va n
	if(n < 1 || x < 0 ) {//Neu n < 1 or x < 0
		printf("Error");//In ra Error
		return 0;//Ket thuc ham
	}
	tu = mau = tong = 1;//Gan 1 cho tu mau tong
	for(i = 1; i <= n;i++) {//Vong lap for i:1->n, kc = 1
		tu *= x;//Tinh tu
		mau = i;//Tinh mau
		u = tu/mau;//Tinh u
		tong += u;//Tinh tong
	}
	printf("S = %.4lf\n", tong);//In ra ket qua
    return 0;
}
int bai4_11() {
    printf("De bai: \n");
    printf("Nhap vao tu ban phim so duong x va so nguyen duong n\n");
    printf("Tinh va in ra tong S = 1 + x + x^2/2! + ... + x^n/n!\n");
    printf("Neu n < 1 or x < 0 in ra Error\n");
    int n, i;//Khai bao n va i
    double x, tu, mau, u, tong;//Khai bao cac so thuc
    printf("\nNhap vap x va n: ");scanf("%lf%d", &x, &n);//Nhap vao x va n
    if(n < 1 || x < 0) {//Neu n < 1 or x < 0
        printf("Error");//In ra Error
        return 0;//Ket thuc chuong trinh
    }
    tu = mau = tong = 1;
    for(i = 1 ; i <= n ; i++)  {//Vong lap for i:1->n, kc = 1
        tu *= x;//Tinh tu
        mau *= i;//Tinh mau
        u = tu/mau;//Tinh u
        tong += u;//Tinh tong
    }
    printf("S = %.4lf\n", tong);//In ra ket qua
    return 0;
}
int bai4_12() {
    printf("De bai: \n");
    printf("Nhap vao tu ban phim so duong x va so nguyen duong n\n");
    printf("Tinh va in ra tong S = 1 + x + x^2/2! + ... + x^n/n!\n");
    printf("Neu n < 1 or x < 0 in ra Error\n");
    int n, i, dau = -1;//Khai bao n, i, dau
    double x, tu, mau, u, tong;//Khai bao cac so thuc
    printf("Nhap vao x va n: ");scanf("%lf%d", &x, &n);//Nhap vao x va n
    if(n < 1 || x < 0) {//Neu n < 1 or x < 0
        printf("Error");//In ra Error
        return 0;//Ket thuc chuong trinh
    }
    tu = mau = tong = 1;
    for(i = 1 ; i <= n ; i++)  { //Vong lap for i:1->n, kc = 1
        tu *= x;//Tinh tu
        mau *= i;//Tinh mau
        u = dau*tu/mau;//Tinh u
        tong += u;//Tinh tong
        dau *= -1;//Gan lai gia tri dau
    }
    printf("S = %.4lf\n", tong);//In ra ket qua
    return 0;
}

int main() {
    int lua_chon ,i;
    printf(" Truong Quang Viet - 5515\n");
    printf(" Lua chon cac muc de thuc hien: \n");
    for(i = 1; i <= 12; i++) 
        printf("%2d. Bai 4.%2d\n", i, i);
    printf("0 . Thoat\n");
    while (1) {//Vong lap while vinh vien
        printf("\nMoi ban chon: "); scanf("%d", &lua_chon); //Nhap vao lua chon cua ban
        while(lua_chon > 12) { //Neu lua chon > 12
            printf("Ban nhap sai! Vui long nhap lai: "); scanf("%d", &lua_chon); //Nhap lai
        }
        if(lua_chon == 0) {//Neu lua chon = 0
            printf("\nBan da thoat chuong trinh"); //In ra mh
            return 0;//Ket thuc vong lap while va dung chuong trinh
        }
        switch (lua_chon) //Cau truc switch-case voi bien lua_chon
        {
        case 1: //lua_chon = 1
            bai4_01(); break;//Goi den ham con va thuc hien 
        case 2: //lua_chon = 2
            bai4_02(); break;//Goi den ham con va thuc hien 
        case 3: //lua_chon = 3
            bai4_03(); break;//Goi den ham con va thuc hien 
        case 4: //lua_chon = 4
            bai4_04(); break;//Goi den ham con va thuc hien 
        case 5: //lua_chon = 5
            bai4_05(); break;//Goi den ham con va thuc hien 
        case 6: //lua_chon = 6
            bai4_06(); break;//Goi den ham con va thuc hien 
        case 7: //lua_chon = 7
            bai4_07(); break;//Goi den ham con va thuc hien 
        case 8: //lua_chon = 8
            bai4_08(); break;//Goi den ham con va thuc hien 
        case 9: //lua_chon = 9
            bai4_09(); break;//Goi den ham con va thuc hien 
        case 10: //lua_chon = 10
            bai4_10(); break;//Goi den ham con va thuc hien 
        case 11: //lua_chon = 11
            bai4_11(); break;//Goi den ham con va thuc hien 
        case 12: //lua_chon = 12
            bai4_12(); break;//Goi den ham con va thuc hien 
        }
    }
    return 0;
}
