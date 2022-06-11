/*
Input:	int a, b ta 
Output:	giai pt ax  + b =0, xet tat ca cac truong hop
*/
#include <stdio.h>

int main() {
	int a,b;
	printf("Nhap a, b: ");scanf("%d %d", &a, &b);
	if(a == 0 && b == 0) {
		printf("Vo so nghiem");
	}
	else if(a == 0 && b != 0) {
		printf("Vo nghiem");
	}
	else {
		printf("x = %f", b / (float)a);
	}
	return 0;
}

