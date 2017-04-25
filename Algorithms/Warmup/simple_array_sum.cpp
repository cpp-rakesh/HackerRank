#include <iostream>

int main() {
    int N = 0;
    int S = 0;

    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int V = 0;
        std::cin >> V;
        S += V;
    }

    std::cout << S << std::endl;

    return 0;
}
