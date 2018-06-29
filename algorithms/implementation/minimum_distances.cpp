/*
  Solution for Minimum Distances HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 9th, 2016
*/

#include <cstdio>
#include <vector>
#include <cmath>

int minimum_distance(const std::vector<int>& A) {
    int distance = A.size() + 1;
    for (std::size_t i = 0; i < A.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < A.size(); ++j) {
            if (A[i] == A[j])
                if (j - i < distance)
                    distance = j - i;
        }
    }

    return distance;
}

int main() {
    int N = 0;
    scanf("%d", &N);

    std::vector<int> A;
    while (N--) {
        int value = 0;
        scanf("%d", &value);
        A.push_back(value);
    }

    const int distance = minimum_distance(A);

    if (distance == A.size() + 1)
        printf("-1\n");
    else
        printf("%d\n", distance);

    return 0;
}
