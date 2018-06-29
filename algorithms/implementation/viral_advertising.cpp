/*
  Solution for Hacker Rank problem Viral Advertisements
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 3rd, 2016
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int x = 5;
    int s = 0;

    while (n--) {
        const int l = x / 2;
        s += l;
        x = l * 3;
    }

    printf("%d\n", s);

    return 0;
}
