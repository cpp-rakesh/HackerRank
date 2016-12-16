/*
  Solution for String Construction from Hacker Rank
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 16th, 2016
*/

#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string line;
        std::getline(std::cin, line);

        int cost = 0;
        int letter = 0;

        for (std::size_t i = 0; i < line.size(); ++i) {
            if ((letter & (1 << (line[i] - 'a'))) == 0) {
                ++cost;
                letter ^= (1 << (line[i] - 'a'));
            }
        }

        std::cout << cost << std::endl;
    }

    return 0;
}
