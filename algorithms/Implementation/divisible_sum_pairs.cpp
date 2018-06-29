/*
  Solution for Divisible Sum Pairs from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 5th, 2016
 */

#include <cstdio>
#include <vector>

int main() {
	std::vector<int> V;
	int n = 0;
	int k = 0;

	scanf("%d %d", &n, &k);

	while (n--) {
		int value = 0;
		scanf("%d", &value);
		V.push_back(value);
	}

	int counter = 0;
	for (int i = 0; i < V.size() - 1; ++i)
		for (int j = i + 1; j < V.size(); ++j)
			if ((V[i] + V[j]) % k == 0)
				++counter;

	printf("%d\n", counter);

	return 0;
}
