/*
  Solution for Extra Cats and a Mouse at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  22/06/2017
 */

#include <cstdio>
#include <cmath>

int main() {
    int q = 0;
    scanf("%d", &q);

    while (q--) {
        int x = 0;
        int y = 0;
        int z = 0;
        scanf("%d %d %d", &x, &y, &z);

        const int a = std::abs(z - x);
        const int b = std::abs(z - y);

        if (a < b)
            printf("Cat A\n");
        else if (b < a)
            printf("Cat B\n");
        else
            printf("Mouse C");
    }

    return 0;
}
