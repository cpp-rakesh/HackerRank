/*
  Solution for Equal Stacks HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 6th, 2016
 */

#include <cstdio>
#include <deque>
#include <vector>

int read_data(std::deque<int>& data, const int& size) {
	int total_height = 0;
	for (int i = 0; i < size; ++i) {
		int value = 0;
		scanf("%d", &value);
		total_height += value;
		data.push_back(value);
	}
	
	return total_height;
}

void read_size(std::vector<int>& size) {
	for (int i = 0; i < 3; ++i) {
		int value = 0;
		scanf("%d", &value);
		size.push_back(value);
	}
}

bool find_max(std::vector<int>& cylinder_heights, int& index) {
	bool result = true;
	int max = cylinder_heights[0];
	for (std::size_t i = 1; i < cylinder_heights.size(); ++i) {
		if (cylinder_heights[i] != cylinder_heights[i - 1])
			result = false;
		if (cylinder_heights[i] > max) {
			max = cylinder_heights[i];
			index = i;
		}
	}

	return result;
}

int main() {
	std::vector<int> size;
	std::vector<int> cylinder_heights;
	std::vector< std::deque<int> > cylinders;

	read_size(size);

	for (int i = 0; i < size.size(); ++i) {
		std::deque<int> row;
		cylinder_heights.push_back(read_data(row, size[i]));
		cylinders.push_back(row);
	}

	while (1) {
		int index = 0;
		if (find_max(cylinder_heights, index)) {
			printf("%d\n", cylinder_heights[0]);
			break;
		} else {
			cylinder_heights[index] -= cylinders[index].front();
			cylinders[index].pop_front();
		}
	}

	return 0;
}
