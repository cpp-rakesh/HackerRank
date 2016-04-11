#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<int> max_sub;
	int number_of_max = 1;
	int max_subjects = 0;
	int N = 0;
	int M = 0;

	std::cin >> N >> M;

	std::vector<std::string> subjects;
	while (N--) {
		std::string sub;
		std::cin >> sub;
		subjects.push_back(sub);
	}

	for (std::size_t i = 0; i < subjects.size() - 1; ++i) {
		for (std::size_t j = i + 1; j < subjects.size(); ++j) {
			int max = 0;
			for (std::size_t k = 0; k < subjects[i].size(); ++k) {
				if (subjects[i][k] == '1' || subjects[j][k] == '1') ++max;
			}
			if (max_subjects == max && max != 0) ++number_of_max;
			if (max > max_subjects) {
				max_subjects = max;
				number_of_max = 1;
			}
		}
	}

	std::cout << max_subjects << std::endl;
	std::cout << number_of_max << std::endl;
}
