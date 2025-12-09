#include <stdio.h>

int main() {
    int a[3][3];
    int b[3][3];
    int i, j;

    printf("Enter 3 x 3 array\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        b[i][0] = a[i][2];
        b[i][1] = a[i][1];
        b[i][2] = a[i][0];
    }

    printf("You entered\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Output\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}


