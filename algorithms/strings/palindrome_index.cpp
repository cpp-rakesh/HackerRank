#include <iostream>
#include <string>

bool is_palindrome(const std::string& S, const int& miss_index) {
    int i = 0;
    int j = S.length() - 1;

    if (i == miss_index) ++i;
    if (j == miss_index) --j;
    while (i < j) {
        if (S[i] != S[j])
            return false;

        ++i;
        --j;

        if (i == miss_index)
            ++i;
        if (j == miss_index)
            --j;
    }

    return true;
}

int main() {
    int T = 0;
    std::cin >> T;

    while (T--) {
        int index = -1;
        std::string S;
        std::cin >> S;

        int i = 0;
        int j = S.length() - 1;

        while (i < j) {
            if (S[i] != S[j]) {
                if (is_palindrome(S, i)) {
                    index = i;
                    break;
                }

                if (is_palindrome(S, j)) {
                    index = j;
                    break;
                }
            }
            ++i;
            --j;
        }

        std::cout << index << std::endl;
    }

    return 0;
}
