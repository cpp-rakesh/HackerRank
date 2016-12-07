/*
  This is the solution for problem Between two sets on HackerRank
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date 8th Dec, 2016
 */

/*
  Algorithm.
  Find the max from A
  Find the min from B
  From max < x < min

  if max is a factor of x then V x {x belongs to A} will be factor as well.
  if x is factor of min, same logic
 */

#include <cstdio>
#include <vector>

bool has_a_factor(int n, const std::vector<int>& A) {
    for (std::size_t i = 0; i < A.size(); ++i)
        if (n % A[i])
            return false;
    return true;
}

bool is_a_factor(int n, const std::vector<int>& B) {
    for (std::size_t i = 0; i < B.size(); ++i)
        if (B[i] % n)
            return false;
    return true;
}

int main() {
    int m = 0;
    int n = 0;

    std::vector<int> A;
    std::vector<int> B;

    int a_max = 0;
    int b_min = 100;

    scanf("%d %d", &m, &n);

    while (m--) {
        int value = 0;
        scanf("%d", &value);
        A.push_back(value);

        if (value > a_max)
            a_max = value;
    }

    while (n--) {
        int value = 0;
        scanf("%d", &value);
        B.push_back(value);

        if (value < b_min)
            b_min = value;
    }

    int counter = 0;
    for (int i = a_max; i <= b_min; ++i)
        if (has_a_factor(i, A) && is_a_factor(i, B))
            ++counter;

    printf("%d\n", counter);

    return 0;
}
