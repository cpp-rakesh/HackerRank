/*
  Solution for Hacker Rank Problem Apples and Oranges
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 3rd, 2016
*/
#include <cstdio>

int main() {
    int s = 0;
    int t = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);

    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);

    int apple_count = 0;
    int orange_count = 0;

    while (m--) {
        int d = 0;
        scanf("%d", &d);

        if (d >= 0) {
            if ((a + d) >= s && (a + d) <= t)
                ++apple_count;
        }
    }

    while (n--) {
        int d = 0;
        scanf("%d", &d);

        if (d <= 0) {
            if ((b + d) >= s && (b + d) <= t)
                ++orange_count;
        }
    }

    printf("%d\n", apple_count);
    printf("%d\n", orange_count);

    return 0;
}
