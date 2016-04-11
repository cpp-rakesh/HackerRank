#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

int main() {
	std::string str;
	std::vector<std::string> data;

	std::getline(std::cin, str);

	str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());

	int R = floor(sqrt(str.size()));
	int C = ceil(sqrt(str.size()));

	if (R * C < str.size())
		R = C;

	int pos = 0;
	for (int i = 0; i < R; ++i) {
		data.push_back(str.substr(pos, C));
		pos += C;
	}

	for (int i = 0; i < C; ++i) {
		for (int j = 0; j < R; ++j) {
			if (i < static_cast<int>(data[j].size())) {
				std::cout << data[j][i];
			}
		}
		std::cout << " ";
	}

	std::cout << std::endl;

	return 0;
}
