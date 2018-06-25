/*
  Solution for Hacker Rank problem Halloween Sale
  Rakesh Kumar @ cpp.rakesh@gmail.com
  25/06/2018
 */

#include <bits/stdc++.h>

int howManyGames(int p, int d, int m, int s) {
    int g = 0;
    int t = 0;
    while (1) {
        t += std::max(p, m);
        p -= d;

        if (t > s)
            break;
        ++g;
    }

    return g;
}

int main() {
    int p = 0;
    int d = 0;
    int m = 0;
    int s = 0;

    scanf("%d %d %d %d", &p, &d, &m, &s);
    printf("Games == [%d]\n", howManyGames(p, d, m, s));

    return 0;
}
