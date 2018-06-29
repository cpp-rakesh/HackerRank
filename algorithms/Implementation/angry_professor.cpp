#include <iostream>
#include <string>
#include <vector>

int main() {
	int T = 0;
	std::vector<std::string> R;

	std::cin >> T;

	for (int i = 0; i < T; ++i) {
		int N = 0;
		int K = 0;

		std::cin >> N >> K;

		int count = 0;
		for (int j = 0; j < N; ++j) {
			int time = 0;
			std::cin >> time;
			if (time <= 0) ++ count;
		}

		if (count >= K) R.push_back("NO");
		else R.push_back("YES");
	}

	for (std::size_t i = 0 ; i < R.size(); ++i)
		std::cout << R[i] << std::endl;
	return 0;
}
