/*
  Solution for Strange Counter from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: August 11th, 2016
 */

#include <cstdio>

typedef unsigned long long int u_long;

int main() {
	u_long t = 0;
	scanf("%llu", &t);

	u_long start = 3;
	u_long end = 3;
	while (t > end) {
		start *= 2;
		end += start;
	}

	printf("%llu\n", end - t + 1);
	
	return 0;
}
