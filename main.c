#include <stdio.h>

int main(void) {
    int x;
    double result;

    scanf("%d", &x);

    result = 1.0 / ((long long)x + 100);

    printf("%.15f", result);

    return 0;
}
