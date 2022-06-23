/*
Input: Dien tich S hinh cau 
Output: The tich V hinh cau  
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
	float R, S, V;
	printf("Nhap dien tich S: ");scanf("%f", &S);
	R = sqrt(S/(4*PI));
	V = PI*pow(R,3)*4/3;
	printf("The tich V: %.3f", V); 
	return 0;
}
