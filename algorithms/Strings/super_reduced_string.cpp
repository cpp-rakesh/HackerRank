/*
  Solution for Super Reduced from HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 5th, 2016
*/

#include <iostream>
#include <string>

int main() {
    std::string data;
    std::getline(std::cin, data);

    int i = data.size() - 1;
    while (i >= 0) {
        if (data[i] == data[i - 1]) {
            data.erase(i - 1, 2);
            i = data.size() - 1;
        } else {
            --i;
        }
    }

    if (data.size())
        std::cout << data << std::endl;
    else
        std::cout << "Empty String" << std::endl;

    return 0;
}
