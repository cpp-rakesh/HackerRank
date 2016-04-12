#include <iostream>
#include <string>
#include <algorithm>

int main() {
	int T = 0;
	std::cin >> T;

	while (T--) {
		std::string S;
		std::cin >> S;

		if (S.length() % 2) {
			std::cout << -1 << std::endl;
		} else {
			int A[26] = { 0 };
			int B[26] = { 0 };
			int letter_count = 0;
			std::string S1 = S.substr(0, S.length() / 2);
			std::string S2 = S.substr(S.length() / 2, S.length());

			for (std::size_t i = 0; i < S1.length(); ++i) {
				++A[S1[i] - 'a'];
				++B[S2[i] - 'a'];
			}

			for (int i = 0; i < 26; ++i)
				if (A[i] > B[i])
					letter_count += A[i] - B[i];

			std::cout << letter_count << std::endl;
		}
	}

	return 0;
}
