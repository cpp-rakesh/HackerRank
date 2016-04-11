#include <iostream>

int main() {
	int T = 0;
	std::cin >> T;

	while (T--) {
		int N = 0;
		int C = 0;
		int M = 0;

		std::cin >> N >> C >> M;

		int toffies = N / C;
		int wrappers = toffies;

		while (wrappers >= M) {
			int t = wrappers / M;
			toffies += t;
			wrappers = t + wrappers % M;
		}

		std::cout << toffies << std::endl;
	}


	return 0;
}
