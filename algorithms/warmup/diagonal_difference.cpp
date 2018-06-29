#include <iostream>
#include <vector>

int main() {
    int A = 0;
    int B = 0;
    int N = 0;

    std::cin >> N;

    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            int value = 0;
            std::cin >> value;

            if (r == c) A += value;
            if (N - 1 - r == c) B += value;
        }
    }

    int S = A - B;
    if (S < 0) S *= -1;
    std::cout << S << std::endl;

    return 0;
}
