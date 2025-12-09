#include <stdio.h>

int main() {
    double a[2][2];
    int i, j;

    printf("Enter 2 x 2 matrix\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%lf", &a[i][j]);
        }
    }

    printf("You entered\n");
    printf("%.0f %.0f\n", a[0][0], a[0][1]);
    printf("%.0f %.0f\n", a[1][0], a[1][1]);

    double det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("Determinant is %f\n", det);

    return 0;
}


