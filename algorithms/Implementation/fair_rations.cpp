/*
  Hacker Rank Solution for Fair Rations.
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 4th, 2016
 */

#include <cstdio>

int main() {
    int odd_count = 0;
    int gap_count = 0;

    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int bread = 0;
        scanf("%d", &bread);

        if (bread % 2) {
            ++odd_count;
            odd_count % 2 ? gap_count -= i : gap_count += i;
        }
    }


    odd_count % 2 ? printf("NO\n") : printf("%d\n", gap_count * 2);
    
    return 0;
}
