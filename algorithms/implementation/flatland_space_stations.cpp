/*
  Solution for Flatland Space Stations from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 20th, 2016
 */

#include <cstdio>
#include <vector>
#include <cmath>

const int MAX = 100000;

int distance(const int& n, const std::vector<int>& stations) {
	int min = MAX;
	for (std::size_t i = 0; i < stations.size(); ++i) {
		int distance = std::abs(n - stations[i]);
		if (distance == 0)
			return 0;
		if (distance < min)
			min = distance;
	}

	return min;
}

int main() {
	int n = 0;
	int m = 0;

	scanf("%d %d", &n, &m);

	if (n == m) {
		printf("0\n");
		return 0;
	}

	std::vector<int> stations;
	
	while (m--) {
		int value = 0;
		scanf("%d", &value);
		stations.push_back(value);
	}

	int max = 0;
	for (int i = 0; i < n; ++i) {
		const int d = distance(i, stations);
		if (d > max)
			max = d;
	}

	printf("%d\n", max);
	
	return 0;
}
