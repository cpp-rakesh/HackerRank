/*
  Solution for Circular Array Rotation from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 19th, 2016
*/

#include <cstdio>
#include <vector>

int main() {
    int n = 0;
    int k = 0;
    int q = 0;

    scanf("%d %d %d", &n, &k, &q);

    std::vector<int> S;
    std::vector<int> F;
    while (n--) {
        int value = 0;
        scanf("%d", &value);
        S.push_back(value);
        F.push_back(0);
    }

    const std::size_t size = S.size();
    for (std::size_t i = 0; i < size; ++i)
        F[(i + k) % size] = S[i];

    while (q--) {
        int pos = 0;
        scanf("%d", &pos);
        printf("%d\n", F[pos]);
    }

    return 0;
}
