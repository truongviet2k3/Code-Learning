/*
Input: 	A(xA, yA), B(xB, yB), C(xC, yC), M(xM, yM)
Output:	M nam trong, ngoai, hay tren canh tam giac ABC
*/
#include <stdio.h>
#include <math.h>

float Area(float xA, float yA, float xB, float yB, float xC, float yC);

int main() {
	float xA, yA, xB, yB, xC, yC, xM, yM, S_ABC, S_ABM, S_ACM, S_BCM;
	printf("A(xA, yA): "); scanf("%f %f", &xA, &yA );
	printf("B(xB, yB): "); scanf("%f %f", &xB, &yB );
	printf("C(xC, yC): "); scanf("%f %f", &xC, &yC );
	printf("M(xM, yM): "); scanf("%f %f", &xM, &yM );
	S_ABC = Area(xA, yA, xB, yB, xC, yC);
	S_ABM = Area(xA, yA, xB, yB, xM, yM);
	S_ACM = Area(xA, yA, xC, yC, xM, yM);
	S_BCM = Area(xB, yB, xC, yC, xM, yM);
	if(S_ABM == 0 || S_ACM == 0 || S_BCM == 0) 
		printf("M nam tren canh tam giac ABC");
	else if((S_ABM + S_ACM + S_BCM ) == S_ABC)
			printf("M nam trong tam giac ABC");
	else 
		printf("M nam ngoai tam giac ABC");
	//printf("S_ABC = %f", S_ABC);
	//printf("\n S = %f", S_ABM + S_ACM + S_BCM );
	return 0;
}

float Area(float xA, float yA, float xB, float yB, float xC, float yC) {
	float S;
	S = fabs(xA*yB - xB*yA + xB*yC - xC*yB + xC*yA - xA*yC)/2;
	return S;
}

