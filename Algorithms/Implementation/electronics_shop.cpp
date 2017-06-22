/*
  Solution for Extra Electronics Shop at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  22/06/2017
 */

#include <cstdio>
#include <vector>

int main() {
    int s = 0;
    int n = 0;
    int m = 0;
    scanf("%d %d %d", &s, &n, &m);

    std::vector<int> keyboards;
    for (int i = 0; i < n; ++i) {
        int p = 0;
        scanf("%d", &p);
        keyboards.push_back(p);
    }

    std::vector<int> mouse;
    for (int i = 0; i < m; ++i) {
        int p = 0;
        scanf("%d", &p);
        mouse.push_back(p);
    }

    int total = -1;
    for (std::size_t i = 0; i < keyboards.size(); ++i) {
        for (std::size_t j = 0; j < mouse.size(); ++j) {
            if (keyboards[i] + mouse[j] > total &&
                keyboards[i] + mouse[j] <= s)
                total = keyboards[i] + mouse[j];
        }
    }

    printf("%d\n", total);

    return 0;
}
