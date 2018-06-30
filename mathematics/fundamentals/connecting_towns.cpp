/*
  Solution for Hacker Rank Problem Connecting Towns
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  28/06/2017
*/

#include <cstdio>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);
        --n;

        int routes = 1;
        while (n--) {
            int r = 0;
            scanf("%d", &r);
            routes *= r;
            routes %= 1234567;
        }

        printf("%d\n", routes);
    }

    return 0;
}
