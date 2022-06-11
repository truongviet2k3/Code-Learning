#include <stdio.h> 
#include <string.h>
int main() {
	long long k;
	char str[60];
	scanf("%lld", k);
	scanf("%s", str);
	printf("%zu",strlen(str));
	return 0;
}
