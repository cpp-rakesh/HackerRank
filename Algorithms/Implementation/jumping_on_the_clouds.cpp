/*
  Solution for Jumping on the Clouds from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 19th, 2016
 */

#include <cstdio>
#include <vector>

int main() {
	int n = 0;
	scanf("%d", &n);

	std::vector<int> clouds;
	while (n--) {
		int type = 0;
		scanf("%d", &type);
		clouds.push_back(type);
	}

	int jumps = 0;
	int index = 0;
	while (1) {
		if (index + 2 < clouds.size()) {
			if (clouds[index + 2] == 0)
				index += 2;
			else
				++index;
		} else {
			++index;
		}
		
		++jumps;

		if (index >= clouds.size() - 1)
			break;
	}

	printf("%d\n", jumps);
	
	return 0;
}
