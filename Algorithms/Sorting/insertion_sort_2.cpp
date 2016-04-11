#include <cstdio>
#include <vector>

void swap(int& A, int& B) {
	int T = A;
	A = B;
	B = T;
}

void print_vector(const std::vector<int>& V) {
	for (std::size_t i = 0; i < V.size(); ++i)
		printf("%d ", V[i]);
	printf("\n");
}

int main() {
	int N = 0;
	std::vector<int> V;
	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		int value = 0;
		scanf("%d", &value);
		V.push_back(value);
	}

	for (std::size_t i = 1; i < V.size(); ++i) {
		int j = i;
		while (j > 0 && V[j] < V[j - 1]) {
			swap(V[j], V[j - 1]);
			--j;
		}

		print_vector(V);
	}

	return 0;
}
