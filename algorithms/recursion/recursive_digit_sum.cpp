/*
  Solution for Hacker Rank Problem  Recursive Digit Sum
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  25/06/2017
*/

#include <iostream>
#include <sstream>
#include <string>

int super_digit(std::size_t n) {
    while (n > 9) {
        std::size_t m = n;
        n = 0;
        while (m) {
            n += (m % 10);
            m /= 10;
        }
    }

    return n;
}

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    std::string n;
    int k = 0;
    iss >> n >> k;

    std::size_t number = 0;
    for (std::size_t i = 0; i < n.size(); ++i)
        number += (n[i] - '0') * k;

    std::cout << super_digit(number) << std::endl;

    return 0;
}
