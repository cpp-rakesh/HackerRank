#include <cstdio>

int main() {
	int T = 0;
	scanf("%d", &T);
	
	while (T--) {
		unsigned long long int A = 0;
		unsigned long long int B = 0;

		scanf("%llu", &A);
		scanf("%llu", &B);

		unsigned long long int result = A;
		unsigned long long int j = B;
		for (unsigned long long int i = A + 1; i < j; ++i, --j) {
			result &= i;
			result &= j;
		}

		printf("%llu\n", result);
	}
	
	return 0;
}
