/*
  Solution for HackerRank in a String! from Hacker Rank
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  23/06/2017
*/

#include <iostream>
#include <string>

const std::string hacker = "hackerrank";

int main() {
    int q = 0;
    std::cin >> q;
    std::cin.ignore();

    while (q--) {
        bool found = false;
        std::string line;
        std::getline(std::cin, line);
        std::size_t i = 0;
        
        for (std::size_t j = 0; j < line.size(); ++j) {
            if (line[j] == hacker[i]) {
                ++i;
                if (i == hacker.size()) {
                    found = true;
                    break;
                }                    
            }
        }

        if (found)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}
