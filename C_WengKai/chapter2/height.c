#include <stdio.h>

int main() {
    printf("please input the height in foot and inch,"
        "if you input \"5 7\", it means 5 foot 7 inch:");

    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("height is %f meter.\n",
        ((foot + inch / 12) * 0.3048));

    return 0;
}
