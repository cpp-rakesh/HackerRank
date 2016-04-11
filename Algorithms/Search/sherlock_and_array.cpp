#include <cstdio>
#include <vector>

int main() {
	int T = 0;
	scanf("%d", &T);

	while (T--) {
		std::vector<int> A;
		int N = 0;
		scanf("%d", &N);

		for (int i = 0; i < N; ++i) {
			int value = 0;
			scanf("%d", &value);
			A.push_back(value);
		}

		int left_sum = 0;
		int right_sum = 0;
		for (int i = 1; i < N; ++i)
			right_sum += A[i];

		bool is_equal = false;
		if (N > 1) {
			for (int i = 1; i < N - 1; ++i) {
				right_sum -= A[i];
				left_sum += A[i - 1];
				if (left_sum == right_sum) {
					is_equal = true;
					break;
				}
			}
		} else {
			is_equal = true;
		}

		if (is_equal)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
