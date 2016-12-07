/*
  This is the Solution for Designer PDF Viewer problem on HackerRank
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 7th, 2016
 */

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> heights;
    
    for (int i = 0; i < 26; ++i) {
        int height = 0;
        std::cin >> height;
        
        heights.push_back(height);
    }

    std::cin.ignore();
    std::string line;
    std::getline(std::cin, line);

    int H = 0;
    for (std::size_t i = 0; i < line.size(); ++i)
        if (heights[line[i] - 'a'] > H)
            H = heights[line[i] - 'a'];

    std::cout << H * line.size() << std::endl;

    return 0;
}
