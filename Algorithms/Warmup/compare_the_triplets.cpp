/*
  Solution for Compare the Triplet HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 15th, 2016
*/

#include <cstdio>
#include <vector>

void compare(const int& a, const int& b, int& a_wins, int& b_wins) {
    if (a > b) ++a_wins;
    if (b > a) ++b_wins;
}

void get_data(std::vector<int>& data) {
    const int N = 3;

    for (int i = 0; i < N; ++i) {
        int value = 0;
        scanf("%d", &value);
        data.push_back(value);
    }			
}

int main() {
    std::vector<int> a;
    std::vector<int> b;
	
    get_data(a);
    get_data(b);

    int a_wins = 0;
    int b_wins = 0;
	
    for (std::size_t i = 0; i < a.size(); ++i)
        compare(a[i], b[i], a_wins, b_wins);
	
    printf("%d %d\n", a_wins, b_wins);

    return 0;
}
