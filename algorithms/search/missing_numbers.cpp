#include <cstdio>

const int MAX = 10000;

int main() {
	int array[MAX] = { 0 };

	int N = 0;
	scanf("%d", &N);
	while (N--) {
		int value = 0;
		scanf("%d", &value);
		++array[value - 1];
	}

	scanf("%d", &N);
	while (N--) {
		int value = 0;
		scanf("%d", &value);
		--array[value - 1];
	}

	for (int i = 0; i < MAX; ++i)
		if (array[i] < 0)
			printf("%d ", i + 1);
	printf("\n");

	return 0;
}
