#include <iostream>
#include <string>

int main() {
    int T = 0;
    std::cin >> T;

    while (T--) {
        std::string A;
        std::string B;

        std::cin >> A;
        std::cin >> B;

        bool is_found = false;

        for (int i = 0; i < 26; ++i) {
            const char c = i + 'a';
            if (A.find(c) != std::string::npos &&
                B.find(c) != std::string::npos) {
                is_found = true;
                break;
            }
        }

        if (is_found)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}
