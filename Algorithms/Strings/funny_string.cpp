/*
  Solution for Funny String
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: September 27th, 2016
*/

#include <string>
#include <cmath>
#include <iostream>

int main() {
    int n = 0;

    std::cin >> n;

    while (n--) {
        std::string line;
        std::cin >> line;

        bool is_funny = true;
        int j = line.size() - 2;
        for (std::size_t i = 1; i < line.size(); ++i, --j) {
            if (std::abs(line[i] - line[i - 1]) != std::abs(line[j] - line[j + 1])) {
                is_funny = false;
                break;
            }
        }

        if (is_funny)
            std::cout << "Funny" << std::endl;
        else
            std::cout << "Not Funny" << std::endl;
    }

    return 0;
}
