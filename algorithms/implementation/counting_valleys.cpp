/*
  Solution for Counting Valleys at Hacker Rank
  Rakesh Kumar @ cpp.rakesh@gmail.com
  02/03/2018
 */

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    bool s = false;
    int level = 0;
    int valleys = 0;
    std::string str;
    std::getline(std::cin, str);
    for (std::size_t i = 0; i < str.size(); ++i) {
        if (str[i] == 'U' && level == -1)
            ++valleys;

        if (str[i] == 'U')
            ++level;
        else
            --level;
    }

    printf("%d\n", valleys);

    return 0;
}
