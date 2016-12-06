/*
  Solution for Mini-Max Sum from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Dec 7th, 2016
 */

#include <cstdio>

int main() {
    long max = 0;
    long min = 1000000000;
    long total = 0;
    int n = 5;

    while (n--) {
        long value = 0;
        scanf("%ld", &value);

        if (value > max)
            max = value;
        if (value < min)
            min = value;

        total += value;
    }

    printf("%ld %ld\n", (total - max), (total - min));
    
    return 0;
}
