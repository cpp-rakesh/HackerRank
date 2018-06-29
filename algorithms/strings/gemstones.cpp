#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::vector<int> > collection;
    int N = 0;
    std::cin >> N;

    while (N--) {
        int A[26] = {0};
        std::vector<int> V(A, A + sizeof(A) / sizeof(A[0]));

        std::string rock;
        std::cin >> rock;

        for (std::size_t i = 0; i < rock.length(); ++i)
            ++V[rock[i] - 'a'];

        collection.push_back(V);
    }

    int gem_elements = 0;
    for (int i = 0; i < 26; ++i) {
        bool is_gem_element = true;
        for (std::size_t j = 0; j < collection.size(); ++j) {
            if (collection[j][i] == 0) {
                is_gem_element = false;
                break;
            }
        }
        if (is_gem_element)
            ++gem_elements;
    }

    std::cout << gem_elements << std::endl;
    return 0;
}
