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
	std::vector<std::vector<int> > result;
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
			// Adding all elements like that only
			std::vector<int> T;
			int k = 0;
			for (; k < j - 1; ++k)
				T.push_back(V[k]);

			// copy paste last 2 elements.
			T.push_back(V[j - 1]);
			T.push_back(V[j - 1]);

			k += 2;

			while (k < V.size())
				T.push_back(V[k++]);

			result.push_back(T);

			swap(V[j], V[j - 1]);
			--j;
		}
	}

	for (std::size_t i = 0; i < result.size(); ++i)
		print_vector(result[i]);
	print_vector(V);

	return 0;
}
