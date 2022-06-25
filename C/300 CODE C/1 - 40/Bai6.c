/*
Input:	int a,b,c
Output:	Tang dan (Dung 1 bien phu)
*/

#include <stdio.h>

//Marco chuyen doi hai bien (co the dung ham) 


#define swap(a, b) { int t =a; a = b; b = t;} 

int main() {
	int a,b,c,t;
	printf("Nhap a, b, c: ");scanf("%d %d %d",&a, &b,&c);
	if (a < b) {
		swap(a,b);
	}
	if (a < c) {
		swap(a,c);
	}
	if (c < b) {
		swap(c,b);
	}
	printf("%d %d %d", b,c,a);
	return 0;
}
