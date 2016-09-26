#include <iostream>
#include <string>
#include <algorithm>

bool is_anagram(std::string S1, std::string S2) {
    if (S1.length() == 1) {
        if (S1[0] != S2[0])
            return false;
    } else {
        std::sort(S1.begin(), S1.end());
        std::sort(S2.begin(), S2.end());

        for (std::size_t i = 0; i < S1.length(); ++i)
            if (S1[i] != S2[i])
                return false;
    }

    return true;
}

int main() {
    int T = 0;
    std::cin >> T;

    while (T--) {
        std::string S;
        std::cin >> S;

        std::size_t len = 1;
        std::size_t count = 0;
        while (len < S.length()) {
            for (std::size_t i = 0; i < S.length() - len; ++i) {
                for (std::size_t j = i + 1; j < (S.length() - len) + 1; ++j) {
                    if (is_anagram(S.substr(i, len), S.substr(j, len))) {
                        ++count;
                    }
                }
            }
            ++len;
        }

        std::cout << count << std::endl;
    }
    return 0;
}
