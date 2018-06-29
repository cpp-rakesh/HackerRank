/*
  Solution for Picking Numbers at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  22/06/2017
 */

#include <cstdio>

int main() {
    int freq[100] = {0};
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int v = 0;
        scanf("%d", &v);
        ++freq[v];
    }

    int max = 2;
    for (int i = 0; i < 99; ++i)
        if (freq[i] + freq[i + 1] > max)
            max = freq[i] + freq[i + 1];

    printf("%d\n", max);
    
    return 0;
}
