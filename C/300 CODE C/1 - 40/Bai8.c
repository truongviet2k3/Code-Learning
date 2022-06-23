/*
Input:	int a, b, c (a != 0 = 1) 
Output:	nghiem pt bac 2: ax^2 + bx + c = 0
*/
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("Nhap a, b, c: ");scanf("%d %d %d", &a, &b, &c);
	float denta = b^2 - 4*a*c;
	if(denta < 0) {
		printf("Vo nghiem");
	}
	else if(!denta) { // thay cho denta == 0
		printf("Co nghiem kep x1 = x2 = %f", -b/(float)(2*a));
	}
	else 
		printf("Phuong trinh co hai nghiem x1 = %f, x2 = %f", (-b+sqrt(denta))/(2*a), (-b-sqrt(denta))/(2*a));
	return 0;
}

