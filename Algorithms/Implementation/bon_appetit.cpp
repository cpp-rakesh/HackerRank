/*
  Solution for Hacker Rank Problem Bon Appetit
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 3rd, 2016
*/

#include <cstdio>

int main() {
    std::size_t n = 0;
    std::size_t k = 0;

    scanf("%lu %lu", &n, &k);

    std::size_t sum = 0;
    for (std::size_t i = 0; i < n; ++i) {
        std::size_t cost = 0;
        scanf("%lu", &cost);

        if (k != i)
            sum += cost;
    }

    std::size_t share = 0;
    scanf("%lu", &share);

    if ((sum / 2) == share)
        printf("Bon Appetit\n");
    else
        printf("%lu\n", share - (sum / 2));

    return 0;
}
