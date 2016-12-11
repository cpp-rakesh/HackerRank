/*
  Solution for Hacker Rank problem Beautiful Days at the Movies
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 12th, 2016
 */

#include <cstdio>
#include <cmath>

typedef unsigned long long int ul;

ul difference(ul x) {
    ul t = x;
    ul reverse = 0;
    int i = 0;

    while (x) {
        reverse = std::pow(i, 10) + (x % 10);
        x /= 10;
    }

    printf("x == [%llu] || reverse == [%llu]\n", t, reverse);

    return std::abs(t - reverse);
}

int main() {
    ul i = 0;
    ul j = 0;
    ul k = 0;
    int count = 0;

    scanf("%llu %llu %llu", &i, &j, &k);

    for (ul p = i; p <= j; ++p)
        if (difference(p) % k == 0)
            ++count;
    
    printf("%d\n", count);
}
