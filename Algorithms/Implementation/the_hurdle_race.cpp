/*
  Solution for The Hurdle Race at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  22/06/2017
 */

#include <cstdio>

int main() {
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);

    int t = k;
    while (n--) {
        int h = 0;
        scanf("%d", &h);

        if (h > t)
            t += h - t;
    }

    printf("%d\n", t - k);

    return 0;
}
