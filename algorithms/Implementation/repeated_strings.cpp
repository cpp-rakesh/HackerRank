/*
  Solution for Hacker Rank Problem Repeated string
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Nov 3rd, 2016
*/

#include <iostream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);

    unsigned long long int count = 0;
    unsigned long long int n = 0;
    std::cin >> n;

    for (std::size_t i = 0; i < line.size(); ++i) {
        if (line[i] == 'a') {
            count += n / line.size();
            if (i < n % line.size())
                ++count;
        }
    }

    std::cout << count << std::endl;
    return 0;
}
