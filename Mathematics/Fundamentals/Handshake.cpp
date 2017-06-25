/*
  Solution for Hacker Rank Problem  Recursive Digit Sum
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  25/06/2017
*/

#include <cstdio>

unsigned long long int handshakes(int n) {
    return (n * (n - 1)) >> 1;
}

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);

        printf("%llu\n", handshakes(n));
    }

    return 0;
}
