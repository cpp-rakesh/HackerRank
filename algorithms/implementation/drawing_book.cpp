/*
  Solution for Drawing Book at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  02/03/2018
 */

#include <bits/stdc++.h>

int main() {
    int n = 0;
    int p = 0;
    scanf("%d", &n);
    scanf("%d", &p);

    printf("%d\n", std::min(p >> 1, (n >> 1) - (p >> 1)));

    return 0;
}
