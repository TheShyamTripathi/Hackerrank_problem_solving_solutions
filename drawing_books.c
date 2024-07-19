#include <stdio.h>

int main() {
    int n, p;
    scanf("%d %d", &n, &p);

    int fromFront = p / 2;
    int fromBack = (n / 2) - (p / 2);

    int minFlips = (fromFront < fromBack) ? fromFront : fromBack;

    printf("%d\n", minFlips);

    return 0;
}
