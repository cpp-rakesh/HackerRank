#include <cstdio>
#include <cmath>

int main() {
    int T = 0;

    scanf("%d", &T);

    while (T--) {
        int A = 0;
        int B = 0;

        scanf("%d %d", &A, &B);

        printf("%d\n", static_cast<int>(floor(sqrt(B)) - ceil(sqrt(A))) + 1);
    }


    return 0;
}
