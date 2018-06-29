#include <iostream>
#include <string>

int main() {
	int N = 0;
	std::string S;
	int K = 0;

	std::cin >> N;
	std::cin >> S;
	std::cin >> K;

	for (std::size_t i = 0; i < N; ++i) {
		if (S[i] >= 'A' && S[i] <= 'Z') {
			int C = S[i] + K;
			while (C > 'Z')
				C = (C - 'Z') + 'A' - 1;
			S[i] = C;
		}

		if (S[i] >= 'a' && S[i] <= 'z') {
			int C = S[i] + K;
			while (C > 'z')
				C = (C - 'z') + 'a' - 1;
			S[i] = C;
		}
	}

	std::cout << S << std::endl;

	return 0;
}
