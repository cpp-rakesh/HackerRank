/*
  The solution for The Love letter mystery from Hacker Rank
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 16th, 2016
 */
#include <iostream>
#include <string>

int main() {
    int T = 0;
    std::cin >> T;

    while (T--) {
        std::string S;
        std::cin >> S;

        int i = 0;
        int j = S.length() - 1;
        int c = 0;

        while (i < j) {
            if (S[i] != S[j]) {
                if (S[i] > S[j]) {
                    while (S[i] != S[j]) {
                        --S[i];
                        ++c;
                    }
                } else {
                    while (S[i] != S[j]) {
                        --S[j];
                        ++c;
                    }
                }
            }
            ++i;
            --j;
        }
        std::cout << c << std::endl;
    }

    return 0;
}
