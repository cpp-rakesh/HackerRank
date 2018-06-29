/*
  Solution for Birthday Cake Candles from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: 25/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int max_height  = -1;
    int max_candles = 0;
    while (n--) {
        int height = 0;
        scanf("%d", &height);

        if (height == max_height) {
            ++max_candles;
        } else if (height > max_height) {
            max_height = height;
            max_candles = 1;
        }
    }

    printf("%d\n", max_candles);

    return 0;
}
