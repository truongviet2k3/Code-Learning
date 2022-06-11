/*
Input: int k > 0
Output: 111....1 chia het cho k
*/
#include <stdio.h>
#include <math.h>

int so_chu_so1(int k) {
	if (k % 2 == 0 || k % 5 == 0 || k % 13 == 0) {
		return -1;
	}
	long long m = 1;
	int i=1;
	for (i=1; i < 30; i++) {
		if (m % k == 0) {
			return i;
		}
		else
			m = m + pow(10,i);
	}
	if (i == 30) {
		return -1;
	}
}

int main() {
	int k;
	printf("k = "); scanf("%d", &k);
	int n = so_chu_so1(k);
	printf("%d", n);
	return 0;
}

