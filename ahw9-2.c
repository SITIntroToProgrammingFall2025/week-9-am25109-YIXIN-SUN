#include <stdio.h>

int main() {
    int a[5];
    int i, j, temp;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted numbers: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


