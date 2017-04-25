/*
  Solution for Hacker Rank Problem Migratory Birds
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  25/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    int types[5] = {0};

    scanf("%d", &n);
    while (n--) {
        int t = 0;
        scanf("%d", &t);
        ++types[t - 1];
    }

    int max = -1;
    int max_type = -1;
    for (int i = 0; i < 5; ++i) {
        if (types[i] > max) {
            max = types[i];
            max_type = i + 1;
        }
    }

    printf("%d\n", max_type);
    return 0;
}
