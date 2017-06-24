/*
  Solution for Climbing the Leaderboard HackerRank.com
  Author: Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: July 9th, 2016
*/

#include <cstdio>
#include <set>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::set<int> board;
    while (n--) {
        int score = 0;
        scanf("%d", &score);

        board.insert(score);
    }

    int m = 0;
    int pos = static_cast<int>(board.size()) + 1;
    scanf("%d", &m);
        
    while (m--) {
        int score = 0;
        scanf("%d", &score);
        board.insert(score);


    }

    return 0;
}
