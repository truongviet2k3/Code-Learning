/*
Input:	So do x cua goc (phut) 
Output:	Cho biet no thuoc goc phan tu bao nhieu. In ra cos(x)
*/
#include <stdio.h>
#include <math.h>

#define PI 3.141592654


int main() {
	unsigned int x_min;
	double x_rad, x_deg;
	printf("Nhap so do x cua goc(phut) : ");scanf("%d", &x_min);
	x_rad = PI*x_min/60/180;
	x_deg = x_min/60;
	while (x_deg >= 360) {
		x_deg -= 360;
	}
	if (x_deg >= 0 && x_deg <90) {
		printf("x thuoc goc phan tu thu 1");
	}
	else if(x_deg >= 90 && x_deg <180) {
		printf("x thuoc goc phan tu thu 2");
	}
	else if(x_deg >= 180 && x_deg <270) {
		printf("x thuoc goc phan tu thu 3");
	}
	else if(x_deg >= 270 && x_deg <360) {
		printf("x thuoc goc phan tu thu 4");
	}
	printf("\ncos(x) = %f", cos(x_rad));
	return 0;
}
