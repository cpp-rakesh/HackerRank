/*
  Solution for Hacker Rank Problem [Minimum Height Triangle]
  Author: Rakesh Kumar @ cpp.rakesh(at)gmail.com
  28/06/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    double b = 0;
    double a = 0;
    scanf("%lf %lf", &b, &a);

    printf("%.0lf\n", std::ceil((2 * a) / b));

    return 0;
}
