#include <cstdio>
#include <vector>

int main() {
	std::vector<int> data;
	for (int i = 0; i <= 100; ++i)
		data.push_back(0);


	int N = 0;
	scanf("%d", &N);

	while (N--) {
		int value = 0;
		scanf("%d", &value);

		++data[value];
	}

	for (int i = 0; i <= 100; ++i) {
		if (data[i] != 0) {
			if (data[i] % 2) {
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}
