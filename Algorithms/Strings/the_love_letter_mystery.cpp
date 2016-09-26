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
