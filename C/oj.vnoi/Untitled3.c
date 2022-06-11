#include <stdio.h>
#include <math.h>

float khoang_cach_2diem(int x1, int y1, int z1, int x2, int y2, int z2) {
	return sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
}
float dien_tich(float a, float b, float c) {
	float p = (a + b + c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main() {
	int T;
	scanf("%d",&T);
	int arr[100][9];
	int i,j;
	for(i=0; i < T; i++ ) {
		for(j=0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i < T;i++) {
		float  AB, BC, CA, S, d;
		AB = khoang_cach_2diem(arr[0][0],arr[0][1],arr[0][2],arr[0][3],arr[0][4],arr[0][5]);
		BC = khoang_cach_2diem(arr[0][3],arr[0][4],arr[0][5],arr[0][6],arr[0][7],arr[0][8]);
		CA = khoang_cach_2diem(arr[0][0],arr[0][1],arr[0][2],arr[0][6],arr[0][7],arr[0][8]);
		S = dien_tich(AB, BC, CA);

		d = 2*S/BC;
		printf("%.2f\n", d);
	}
	return 0;
}
