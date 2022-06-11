/*
Input:  Ba canh tam giac a, b, c
		Kiem tra tam giac co hop le
Ouput:	Loai tam giac
		Dien tich S
*/
#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, p, S;
	printf("Nhap 3 canh tam giac: ");scanf("%f %f %f", &a, &b, &c);
	if(a + b <= c || b + c <= a || c + a <= b) {
		printf("Tam giac khong hop le!");
		return 0;
	}
	p = (a + b +c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	if (a == b && b == c) {
		printf("Tam giac deu");
	}
	else if(a == b || a == c || b == c) {
		if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) {
			printf("Tam giac vuong can");
		}
		else 
			printf("Tam giac can");
	}
	else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) {
		printf("Tam giac vuong");
	}
	else 
		printf("Tam giac thuong");
	printf("\nDien tich S = %.3f", S);
	return 0;
}
