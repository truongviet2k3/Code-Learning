/*
Input:  C(xC, yC),R: duong tron (C,R)
		M(xM, yM)
Output: M co nam trong (C,R) 
*/
#include <stdio.h>
#include <math.h>

int main() {
	float xC, yC, R, xM, yM, CM;
	printf("Nhap toa do tam C(xC, yC): ");scanf("%f %f",&xC, &yC);
	printf("Nhap ban kinh R: "); scanf("%f", &R);
	printf("Nhap toa do M(xM, yM): "); scanf("%f %f", &xM, &yM );
	CM = sqrt(pow(xM-xC,2) + pow(yM- yC, 2));
	(CM < R) ? printf("M nam trong C()") : printf("M nam ngoai C()");
	return 0;
}

