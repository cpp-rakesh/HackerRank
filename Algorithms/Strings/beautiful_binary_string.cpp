/*
  Solution for Beautiful Binary String HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 6th, 2016
 */

#include <iostream>
#include <string>
#include <vector>

int main() {
	int change_counter = 0;
	std::string data;

	int n = 0;
	std::cin >> n;
	std::cin.ignore();
	std::getline(std::cin, data);

	std::vector<int> positions;
	std::size_t pos = data.find("010");
	while (pos != std::string::npos) {
		positions.push_back(pos);
		pos = data.find("010", pos + 1);
	}

	int iter = 0;
	int size = positions.size();
	while (1) {
		if (iter + 1 >= positions.size())
			break;
		if (positions[iter + 1] - positions[iter] < 3) {
			iter += 2;
			--size;
		} else {
			++iter;
		}
		
	}

	std::cout << size << std::endl;
	
	return 0;
}
