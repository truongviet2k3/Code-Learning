/*
Input:	int a,b,c
Output:	Tang dan (Dung 1 bien phu)
*/

#include <stdio.h>

int main() {
	int a,b,c,t;
	printf("Nhap a, b, c: ");scanf("%d %d %d",&a, &b,&c);
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	if (a < c) {
		t = a;
		a = c;
		c = t;
	}
	if (c < b) {
		t = c;
		c = b;	
		b = t;
	}
	printf("%d %d %d", b,c,a);
	return 0;
}
