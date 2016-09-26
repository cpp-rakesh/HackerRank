/*
  Solution for Camel Case
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: September 27th, 2016
*/

#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cin.ignore();
    std::getline(std::cin, line);

    int counter = 1;
    int j = line.size() - 1;
    for (std::size_t i = 0; i <= j; ++i, --j) {
        if (i == j) {
            if (line[i] >= 'A' && line[i] <= 'Z')
                ++counter;
            break;
        }

        if (line[i] >= 'A' && line[i] <= 'Z')
            ++counter;
        if (line[j] >= 'A' && line[j] <= 'Z')
            ++counter;
    }

    std::cout << counter << std::endl;
    
    return 0;
}
