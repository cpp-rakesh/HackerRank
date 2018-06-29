/*
  Solution for Save the Prisioner HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 15th, 2016
*/

#include <cstdio>

int main() {
    int T = 0;
    scanf("%d", &T);

    while (T--) {
        int N = 0;
        int M = 0;
        int S = 0;

        scanf("%d %d %d", &N, &M, &S);
        const int warning = (M + S - 1) % N;
        if (warning)
            printf("%d\n", warning);
        else
            printf("%d\n", N);
    }
	
    return 0;
}
