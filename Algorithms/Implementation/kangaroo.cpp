/*
  Solution for Kangroo problem from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 5th, 2016
 */

#include <cstdio>
#include <cmath>

int main() {
	int x1 = 0;
	int x2 = 0;
	int v1 = 0;
	int v2 = 0;

	scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

	const double n = (x1 - x2) / static_cast<double>(v2 - v1);

	if (n >= 0 && (n - static_cast<int>(n)) == 0.0f)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
