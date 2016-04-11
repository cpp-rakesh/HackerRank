#include <cstdio>
#include <vector>

int main() {
	int T = 0;
	int P = 0;
	int N = 0;
	int Z = 0;

	scanf("%d", &T);

	for (int i = 0; i < T; ++i) {
		int V = 0;
		scanf("%d", &V);

		if (V == 0)
			++Z;
		else if (V > 0)
			++P;
		else
			++N;
	}

	printf("%.6f\n", P / static_cast<double>(T));
	printf("%.6f\n", N / static_cast<double>(T));
	printf("%.6f\n", Z / static_cast<double>(T));

	return 0;
}
