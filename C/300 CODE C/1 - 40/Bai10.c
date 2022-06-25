/*
Input: 	SIN: co 9 chu so
Output:	Kiem tra xem SIN co hop le khong
*/
#include <stdio.h>

int main() {
	int S=1, s1, s2 ;
	int arr[10];
	while(S != 0) {
		s1 = 0; s2 = 0;
		printf("SIN (0 de thoat) : "); scanf("%d",	&S);
		if(S == 0) {
			break;
		}
		int i;
		for(i =0; i <9 ;i++) {
			arr[i] = S % 10;
			S = S/10;
		}
		for(i = 1; i < 9;i++) {
			if((i+1) % 2 != 0) {
				s1 += arr[i];
			}
			else {
				if(arr[i] * 2 >= 10) {
					s2 += 1 + (2*arr[i])% 10;
				}
				else {
					s2 += 2*arr[i];
				}
			}
		}
		if((s1 + s2 + arr[0]) % 10 == 0) {
			printf("SIN hop le!\n");
		}
		else {
			printf("SIN khong hop le!\n");
		}
		S = 1;
	}
	return 0;
}

