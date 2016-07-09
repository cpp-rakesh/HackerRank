/*
     Solution for New Year Chaos HackerRank.com
	 Author: Rakesh Kumar @ cpp.rakesh@gmail.com
	 Date: July 9th, 2016
*/

#include <cstdio>
#include <cmath>
#include <vector>

void check_chaos(const std::vector<int>& queue) {
	int bribed_persons = 0;
	for (int i = queue.size() - 1; i >= 0; --i) {
		if (queue[i] - (i + 1) > 2) {
			printf("Too chaotic\n");
			return;
		}

		for (int j = std::max(0, queue[i] - 2); j < i; ++j)
			if (queue[j] > queue[i])
				++bribed_persons;
	}

	printf("%d\n", bribed_persons);
}

int main() {
	int T = 0;
	scanf("%d", &T);

	while (T--) {
		int N = 0;
		scanf("%d", &N);

		std::vector<int> queue;		
		while (N--) {
			int position = 0;
			scanf("%d", &position);
			queue.push_back(position);
		}

		check_chaos(queue);
	}
}
