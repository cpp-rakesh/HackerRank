/*
  Solution for Hacker Rank problem Closest Numbers
  Rakesh Kumar @ cpp.rakesh@gmail.com
  25/06/2108
 */

#include <bits/stdc++.h>

std::vector<int> closestNumbers(std::vector<int>& v) {
    std::sort(v.begin(), v.end());

    int min = 1e+7 + 1;

    std::vector<int> r;
    for (std::size_t i = 0; i < v.size() - 1; ++i) {
        if (v[i + 1] - v[i] < min) {
            r.clear();
            r.push_back(v[i]);
            r.push_back(v[i + 1]);
            min = v[i + 1] - v[i];
        } else if (v[i + 1] - v[i] == min) {
            r.push_back(v[i]);
            r.push_back(v[i + 1]);
        }
    }

    return r;
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

    const std::vector<int> r = closestNumbers(v);
    for (std::size_t i = 0; i < r.size(); ++i)
        printf("%d, ", r[i]);
    printf("\n");

    return 0;
}
