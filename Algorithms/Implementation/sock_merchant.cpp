/*
  Solution for Jumping on the Clouds from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 19th, 2016
 */

#include <cstdio>

int main() {
    int stock[100] = {0};

    int n = 0;
    scanf("%d", &n);

    int pairs = 0;
    while (n--) {
        int color = 0;
        scanf("%d", &color);

        ++stock[color - 1];
        
        if (stock[color - 1] == 2) {
            ++pairs;
            stock[color - 1] = 0;
        }
    }

    printf("%d\n", pairs);

    return 0;
}
