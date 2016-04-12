#include <cstdio>
#include <vector>

int main() {
	int T = 0;
	scanf("%d", &T);

	while (T--) {
		int M = 0;
		scanf("%d", &M);

		int N = 0;
		scanf("%d", &N);

		std::vector<int> cost;
		for (int i = 0; i < N; ++i) {
			int c = 0;
			scanf("%d", &c);
			cost.push_back(c);
		}

		bool is_found = false;
		for (int i = 0; i < N - 1; ++i) {
			for (int j = i + 1; j < N; ++j) {
				if (M - cost[i] == cost[j]) {
					printf("%d %d\n", i + 1, j + 1);
					is_found = true;
				}
			}

			if (is_found)
				break;
		}
	}

	return 0;
}
