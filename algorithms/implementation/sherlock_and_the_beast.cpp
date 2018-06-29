#include <iostream>
#include <string>
#include <vector>

int main() {
	int T = 0;
	std::vector<std::string> V;
	std::cin >> T;

	for (int i = 0; i < T; ++i) {
		int N = 0;
		std::string S;

		std::cin >> N;

		int A = N;
		while (A % 3 != 0) A -= 5;

		if (A < 0) {
			S = "-1";
		} else {
			for (int i = 0; i < A; ++i)
				S += '5';
			for (int i = 0; i < N - A; ++i)
				S += '3';
		}
		V.push_back(S);
	}

	for (std::size_t i = 0; i < V.size(); ++i)
		std::cout << V[i] << std::endl;

	return 0;
}
