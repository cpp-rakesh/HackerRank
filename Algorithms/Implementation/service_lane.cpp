#include <iostream>
#include <vector>

int main() {
	std::vector<int> lane;
	int N = 0;
	int T = 0;

	std::cin >> N >> T;

	while (N--) {
		int value = 0;
		std::cin >> value;
		lane.push_back(value);
	}

	while (T--) {
		int entry = 0;
		int exit = 0;
		std::cin >> entry >> exit;

		int max_vehicle = lane[entry];
		for (int i = entry + 1; i <= exit; ++i)
			if (lane[i] < max_vehicle) max_vehicle = lane[i];

		std::cout << max_vehicle << std::endl;
	}

	return 0;
}
