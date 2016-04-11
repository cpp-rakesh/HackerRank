#include <iostream>
#include <vector>

int main() {
	int T = 0;
	std::vector<int> V;
	std::cin >> T;

	for (int i = 0; i < T; ++i) {
		int N = 0;
		std::cin >> N;

		int H = 1;
		for (int j = 0; j < N; ++j) {
			if (j % 2 == 0) H *= 2;
			else H += 1;
		}

		V.push_back(H);
	}

	for (std::size_t i = 0; i < V.size(); ++i)
		std::cout << V[i] << std::endl;

	return 0;
}
