/*
  Solution for Extra Grading Students at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  22/06/2017
 */

#include <cstdio>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int m = 0;
        scanf("%d", &m);

        const int n = ((m / 5) + 1) * 5;
        if (m < 38 || n - m >= 3)
            printf("%d\n", m);
        else
            printf("%d\n", n);
    }

    return 0;
}
