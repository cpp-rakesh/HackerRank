#include <iostream>
#include <string>

int main() {
    bool is_pangram = true;
    int array[26] = {0};
    std::string line;
    std::getline(std::cin, line);

    for (std::size_t i = 0; i < line.size(); ++i) {
        if (line[i] != ' ') {
            if (line[i] >= 'A' && line[i] <= 'Z')
                array[line[i] - 'A'] = 1;

            if (line[i] >= 'a' && line[i] <= 'z')
                array[line[i] - 'a'] = 1;
        }
    }

    for (int i = 0;i < 26; ++i) {
        if (!array[i]) {
            is_pangram = false;
            break;
        }
    }

    if (is_pangram)
        std::cout << "pangram" << std::endl;
    else
        std::cout << "not pangram" << std::endl;

    return 0;
}
