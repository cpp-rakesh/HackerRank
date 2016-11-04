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

    while (n--) {
        int value = 0;
        scanf("%d", &value);

        ++array[value - 1];
    }

    int total_elements = 0;
    int max_elements = 0;

    for (int i = 0; i < max; ++i) {
        total_elements += array[i];
        if (array[i] > max_elements)
            max_elements = array[i];
    }

    printf("%d\n", total_elements - max_elements);

    return 0;
}
