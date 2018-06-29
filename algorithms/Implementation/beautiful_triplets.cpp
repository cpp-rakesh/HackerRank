/*
  Solution for Hacker Rank problem Beautiful Triplets
  Rakesh Kumar @ cpp.rakesh@gmail.com
  25/06/2018
 */

#include <bits/stdc++.h>

int beautifulTriplets(int d, const std::vector<int>& v) {
    int result = 0;

    std::unordered_map<int, bool> dict;
    for (std::size_t i = 0; i < v.size(); ++i) {
        dict[v[i]] = true;
        int n = v[i] - d;
        if (n >= 0 && dict[n]) {
            n = v[i] - 2 * d;
            if (n >= 0 & dict[n])
                ++ result;
        }
    }

    return result;
}

int main() {
    std::vector<int> v;
    int n = 0;
    int d = 0;
    scanf("%d %d", &n, &d);

    while (n--) {
        int e = 0;
        scanf("%d", &e);
        v.push_back(e);
    }

    printf("Beautiful triplets == [%d]\n", beautifulTriplets(d, v));

    return 0;
}
