#include <iostream>
#include <string>

int main() {
	int T = 0;
	std::cin >> T;

	while (T--) {
		std::string data;
		std::cin >> data;

		int counter = 0;
		for (std::size_t i = 0; i < data.length() - 1; ++i) {
			if (data[i] == data[i + 1])
				++counter;
		}

		std::cout << counter << std::endl;
	}
	return 0;
}
