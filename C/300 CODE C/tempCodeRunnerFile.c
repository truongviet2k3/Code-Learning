unsigned int n;
	unsigned long long result = 0;
	unsigned long long MODULO = 1e10;
	int i,j;
	printf("Nhap n: "); scanf("%u", &n);
    for(i = 1; i <= n; i++) {
		unsigned long long t = i;
		for (j = 1; j < i; j ++) {
			t *= i;
			t %= MODULO;
		}
		result += t;
		result %= MODULO;
	}
	printf("%llu\n", result);
	