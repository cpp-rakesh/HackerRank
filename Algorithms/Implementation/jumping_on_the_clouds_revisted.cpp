/*
  Solution for Jumping on the Clouds:Revisted from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 13th, 2016
 */

#include <cstdio>
#include <vector>

int calculate_energy(const std::vector<int>& clouds, const int& k) {
	int energy = 100;
	int position = 0;
	const int size = clouds.size();

	while (1) {
		position += k;

		if (position >= size)
			position -= size;

		if (clouds[position])
			energy -= 3;
		else
			energy -= 1;

		if (position == 0)
			break;
	}
	
	return energy;
}

int main() {
	int n = 0;
	int k = 0;

	scanf("%d %d", &n, &k);

	std::vector<int> clouds;
	while (n--) {
		int value = 0;
		scanf("%d", &value);
		clouds.push_back(value);
	}

	printf("%d\n", calculate_energy(clouds, k));

	return 0;
}
