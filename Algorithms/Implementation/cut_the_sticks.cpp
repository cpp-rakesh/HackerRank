#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int N = 0;
	std::vector<int> V;
	std::cin >> N;

	for (int i = 0; i < N; ++i) {
		int value = 0;
		std::cin >> value;
		V.push_back(value);
	}


	std::sort(V.begin(), V.end());

	while (V.size()) {
		std::cout << V.size() << std::endl;
		int reduce = V[0];
		for (std::size_t i = 1; i < V.size(); ++i)
			V[i] -= reduce;

		V.erase(V.begin());
		if (V.size())
			while (V[0] == 0) V.erase(V.begin());
		else
			break;
	}

	return 0;
}
