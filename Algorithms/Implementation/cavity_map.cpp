#include <iostream>
#include <vector>
#include <string>

int main() {
	int N = 0;
	std::vector<std::string> V;

	std::cin >> N;

	for (int i = 0; i < N; ++i) {
		std::string S;
		std::cin >> S;
		V.push_back(S);
	}

	for (int r = 1; r < N - 1; ++r) {
		for (int c = 1; c < N - 1; ++c) {
			if ((V[r][c - 1] < V[r][c] && V[r][c] > V[r][c + 1]) &&
				(V[r - 1][c] < V[r][c] && V[r][c] > V[r + 1][c]))
				V[r][c] = 'X';
		}
	}

	for (int i = 0; i < N; ++i)
		std::cout << V[i] << std::endl;

	return 0;
}
