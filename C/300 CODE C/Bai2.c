/*
Input: Toa do diem A(xA,yA) va B(xB,yB)
Ouput: AB = ?
*/
#include <stdio.h>
#include <math.h>

int main() {
	float xA, yA, xB, yB, AB;
	scanf("%f %f", &xA, &yA);
 	scanf("%f %f", &xB, &yB);
	AB = sqrt(pow(xB-xA,2) + pow(yB - yA,2));
	printf("AB = %.3f", AB);
	return 0;
}
