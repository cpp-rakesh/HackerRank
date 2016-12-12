/*
  Solution for Intro to Tutorial Challenges
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: Dec 12th, 2016
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> A;
    int V = 0;
    std::cin >> V;

    int N = 0;
    std::cin >> N;

    while (N--) {
        int value = 0;
        std::cin >> value;
        A.push_back(value);
    }

    int low = 0;
    int high = A.size() - 1;
    int mid = (low + high) / 2;
    while (1) {
        if (A[mid] == V) {
            std::cout << mid << std::endl;
            break;
        } else if (A[mid] < V) {
            low = mid + 1;
            mid = (low + high) / 2;
        } else {
            high = mid - 1;
            mid = (low + high) / 2;
        }
    }

    return 0;
}
