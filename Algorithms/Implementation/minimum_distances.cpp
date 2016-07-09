/*
     Solution for Minimum Distances HackerRank.com
	 Author: Rakesh Kumar @ cpp.rakesh@gmail.com
	 Date: July 9th, 2016
*/

#include <cstdio>
#include <vector>
#include <cmath>

void calculate_distance(const std::vector<int>& A, const int& start, const int& end, int& distance) {
	for (int i = start; i < end; ++i) {
		for (int j = start + 1; j <= end; ++j) {
			if (i != j && A[i] == A[j]) {
				if (std::abs(i - j) < distance) {
					distance = std::abs(i - j);
				}
			}
		}
	}
}

void min_distance(const std::vector<int>& A, const int& start, const int& end, int& distance) {
	if (start < end) {
		const int mid = (start + end) / 2;
		min_distance(A, start, mid, distance);
		min_distance(A, mid + 1, end, distance);		
		calculate_distance(A, start, end, distance);
	}
}

int main() {
	int N = 0;
	scanf("%d", &N);

	std::vector<int> A;
	while (N--) {
		int value = 0;
		scanf("%d", &value);
		A.push_back(value);
	}

	int distance = A.size() + 1;
	min_distance(A, 0, A.size() - 1, distance);

	if (distance == A.size() + 1)
		printf("-1\n");
	else
		printf("%d\n", distance);

	return 0;
}
