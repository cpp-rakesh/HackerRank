/*
  Solution for Marc's Cakewalk
  Hacker Rank, Greedy Algorithm solution
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/06/2017
 */

#include <cstdio>
#include <vector>
#include <algorithm>

std::size_t pow(int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return 2;
    } else {
        const std::size_t t = pow(n / 2);
        if (n % 2)
            return 2 * t * t;
        else
            return t * t;
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);
    
    std::vector<int> calories;
    while (n--) {
        int c = 0;
        scanf("%d", &c);
        calories.push_back(c);
    }

    std::sort(calories.begin(), calories.end());

    std::size_t walk = 0;
    for (int i = calories.size() - 1; i >= 0; --i)
        walk += pow(calories.size() - 1 - i) * calories[i];

    printf("%lu\n", walk);

    return 0;
}
