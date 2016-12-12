/*
  Solution for Hacker Rank problem Beautiful Days at the Movies
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 12th, 2016
 */

#include <cstdio>
#include <cmath>

typedef long long int ul;

ul difference(ul x) {
    const ul t = x;
    ul reverse = 0;
    int i = 0;

    while (x) {
        reverse = (reverse * 10) + (x % 10);
        x /= 10;
    }

    return std::abs(t - reverse);
}

int main() {
    ul i = 0;
    ul j = 0;
    ul k = 0;
    int count = 0;

    scanf("%lld %lld %lld", &i, &j, &k);

    for (ul p = i; p <= j; ++p)
        if (difference(p) % k == 0)
            ++count;
    
    printf("%d\n", count);
}
