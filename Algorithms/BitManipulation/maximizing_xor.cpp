#include <cstdio>

int main() {
	int L = 0;
	int R = 0;

	scanf("%d", &L);
	scanf("%d", &R);

	int max = 0;
	for (int i = L; i <= R; ++i) {
		for (int j = L; j <= R; ++j) {
			int result = i ^ j;
			if (result > max)
				max = result;
		}
	}

	printf("%d\n", max);

	return 0;
}
