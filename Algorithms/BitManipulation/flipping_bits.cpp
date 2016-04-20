#include <cstdio>

int main() {
	int T = 0;
	scanf("%d", &T);

	while (T--) {
		unsigned int N = 0;
		scanf("%d", &N);

		for (int i = 0; i < 32; ++i)
			N ^= 1 << i;

		printf("%u\n", N);
	}
	
	return 0;
}
