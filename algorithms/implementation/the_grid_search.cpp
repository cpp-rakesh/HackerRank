#include <iostream>
#include <string>
#include <vector>

int main() {
	int T = 0;
	std::cin >> T;

	while (T--) {
		std::vector<std::string> grid;
		std::vector<std::string> pattern;
		int GR = 0;
		int GC = 0;
		int PR = 0;
		int PC = 0;

		std::cin >> GR >> GC;

		for (int i = 0; i < GR; ++i) {
			std::string str;
			std::cin >> str;
			grid.push_back(str);
		}

		std::cin >> PR >> PC;

		for (int i = 0; i < PR; ++i) {
			std::string str;
			std::cin >> str;
			pattern.push_back(str);
		}


		bool is_found = true;
		for (int r = 0; r <= GR - PR; ++r) {
			for (int c = 0; c <= GC - PC; ++c) {
				if (grid[r][c] == pattern[0][0]) {
					bool is_pattern = true;
					std::size_t a = r;
					std::size_t b = c;
					for (int i = 0; i < PR; ++i) {
						for (int j = 0; j < PC; ++j) {
							if (grid[a][b++] != pattern[i][j]) {
								is_pattern = false;
								break;
							}
						}
						++a;
						b = c;
						if (is_pattern == false) break;
					}
					if (is_pattern) {
						is_found = true;
						break;
					}
				} else {
					is_found = false;
				}

			}
			if (is_found) break;
		}

		if (is_found)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;

	}

	return 0;
}
