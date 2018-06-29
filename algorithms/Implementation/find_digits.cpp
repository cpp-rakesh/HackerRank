#include <iostream>

int main() {
	int T = 0;
	std::cin >> T;

	for (int i = 0; i < T; ++i) {
		int N = 0;
		std::cin >> N;

		int T = N;
		int count = 0;
		while (T) {
			if (T % 10 != 0)
				if (N % (T % 10) == 0) ++count;
			T /= 10;
		}

		std::cout << count << std::endl;
	}

	return 0;
}
