/*
  Solution for Minimum Absolute Difference in an Array
  Hacker Rank, Greedy Algorithm solution
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/06/2017
 */

#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> data;
    while (n--) {
        int v = 0;
        scanf("%d", &v);
        data.push_back(v);
    }

    std::sort(data.begin(), data.end());

    int min = std::abs(data[data.size() - 1] - data[data.size() - 2]);
    for (int i = data.size() - 3; i > 0; --i) {
        const int m = data[i] - data[i - 1];
        if (m < min)
            min = m;
    }

    printf("%d\n", min);

    return 0;
}
