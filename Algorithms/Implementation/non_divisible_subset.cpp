/*
     Solution for Non - Divisible Subset HackerRank.com
	 Author: Rakesh Kumar @ cpp.rakesh@gmail.com
	 Date: July 9th, 2016
*/

#include <cstdio>
#include <vector>

int count_non_divisible_subset(const std::vector<int>& S, const int& k) {
	int count = 0;
	for (std::size_t i = 0; i < S.size() - 1; ++i)
		for (std::size_t j = i + 1; j < S.size(); ++j)
			if ((S[i] + S[j]) % k != 0)
				++count;
	
	return count;
}

int main() {
	int n = 0;
	int k = 0;

	scanf("%d %d", &n, &k);

	std::vector<int> Set;
	while (n--) {
		int value = 0;
		scanf("%d", &value);
		Set.push_back(value);
	}

	printf("%d\n", count_non_divisible_subset(Set, k));
	
	return 0;
}
