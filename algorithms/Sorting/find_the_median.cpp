/*
  Solution for Hacker Rank problem Find the median
  Rakesh Kumar @ cpp.rakesh@gmail.com
  25/06/2018
 */

#include <bits/stdc++.h>

int findMedian(std::vector<int>& v) {
    std::sort(v.begin(), v.end());
    return v[v.size() >> 1];
}

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> v;
    while (n--) {
        int e = 0;
        scanf("%d", &e);
        v.push_back(e);
    }

    printf("Median == [%d]\n", findMedian(v));

    return 0;
}
