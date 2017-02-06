/*
  Solution for Priyanka and Toys
  Hacker Rank, Greedy Algorithm solution
  Author: Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 7th, 2017
 */

#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> weights;

    while (n--) {
        int value = 0;
        scanf("%d", &value);
        weights.push_back(value);
    }

    int cost = 1;
    std::sort(weights.begin(), weights.end());
    
    int starting_weight = weights[0];
    for (std::size_t i = 0; i < weights.size(); ++i) {
        if (weights[i] > starting_weight + 4) {
            starting_weight = weights[i];
            ++cost;
        }
    }

    printf("%d\n", cost);

    return 0;
}
