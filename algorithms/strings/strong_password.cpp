/*
  Solution for Strong password from Hacker Rank
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: 19/04/2019
*/

#include <bits/stdc++.h>

inline bool is_upper(char c) {
    return c >= 'A' && c <= 'Z';
}

inline bool is_lower(char c) {
    return c >= 'a' && c <= 'z';
}

inline bool is_digit(char c) {
    return c >= '0' && c <= '9';
}

inline bool is_special(char c) {
    return c == '!' || c == '@' ||
        c == '#' || c == '$' ||
        c == '%' || c == '^' ||
        c == '&' || c == '*' ||
        c == '(' || c == ')' ||
        c == '-' || c == '+';
}

int minimumNumber(int n, std::string p) {
    int t[4] = {0};
    for (std::size_t i = 0; i < p.size(); ++i)
        if (is_upper(p[i]))
            t[0] = 1;
        else if (is_lower(p[i]))
            t[1] = 1;
        else if (is_digit(p[i]))
            t[2] = 1;
        else if (is_special(p[i]))
            t[3] = 1;

    int s = 0;
    for (int i = 0; i < 4; ++i)
        s += t[i];
    if (n < 6)
        return std::max(6 - n, 4 - s);
    else
        return 4 - s;
}

int main() {
    printf("%d\n", minimumNumber(11, "#HackerRank"));
    return 0;
}
