/*
  Solution for Breaking the Records problem from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  Date: 19/04/2017
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int max = -1;
    int min = 100000001;
    int min_record = -1;
    int max_record = -1;
    while (n--) {
        int score = 0;
        scanf("%d", &score);

        
        if (score < min) {
            min = score;
            ++min_record;
        }

        if (score > max) {
            max = score;
            ++max_record;
        }
    }

    printf("%d %d\n", max_record, min_record);
    return 0;
}
