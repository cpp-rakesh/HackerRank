/*
  Solution for Day of the Programmer at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  02/03/2018
 */

#include <bits/stdc++.h>

const int d = 13;
const int m = 9;
const int s = 26;

inline bool is_leap(int y) {
    return y % 4 == 0;
}

inline bool is_leap1(int y) {
    if ((y % 4 == 0 && y % 100) || (y % 400 == 0))
            return true;

    return false;
}

int main() {
    int y = 0;
    scanf("%d", &y);

    int dd = 0;
    if (y < 1918)
        if (is_leap(y))
            dd = d - 1;
        else
            dd = d;
    else if (y > 1918)
        if (is_leap1(y))
            dd = d - 1;
        else
            dd = d;
    else
        dd = s;

    printf("%02d.%02d.%d\n", dd, m, y);

    return 0;
}
