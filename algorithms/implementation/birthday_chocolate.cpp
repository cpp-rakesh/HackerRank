/*
  Solution for Birthday Chocolate at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  25/02/2018
*/

#include <bits/stdc++.h>

int count(const std::vector<int>& choco, int d, int m) {
    int c = 0;
    for (std::size_t i = 0; i < choco.size() - m + 1; ++i) {
        int s = 0;
        for (int j = 0; j < m; ++j)
            s += choco[i + j];
        c += (s == d);
    }

    return c;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> choco;
    while (n--) {
        int e = 0;
        scanf("%d", &e);
        choco.push_back(e);
    }

    int d = 0;
    int m = 0;
    scanf("%d %d", &d, &m);
    printf("%d\n", count(choco, d, m));

    return 0;
}
