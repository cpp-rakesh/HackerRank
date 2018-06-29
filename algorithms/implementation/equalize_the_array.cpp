/*
  Solution for Hacker Rank problem, Equalize the Problem
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 4th, 2016
 */

#include <cstdio>

const int max = 100;

int main() {
    int array[max] = {0};

    int n = 0;
    scanf("%d", &n);

    int max_elements = 0;
    for (int i = 0; i < n; ++i) {
        int value = 0;
        scanf("%d", &value);
        
        ++array[value - 1];
        if (array[value - 1] > max_elements)
            max_elements = array[value - 1];
    }

    printf("%d\n", n - max_elements);

    return 0;
}
