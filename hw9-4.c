#include <stdio.h>

int main() {
    int rgb[3];
    char hexDigits[] = "0123456789ABCDEF";
    char hexCode[7];

    scanf("%d", &rgb[0]);
    scanf("%d", &rgb[1]);
    scanf("%d", &rgb[2]);

    for (int i = 0; i < 3; i++) {
        int first = rgb[i] / 16;
        int second = rgb[i] % 16;
        hexCode[i*2] = hexDigits[first];
        hexCode[i*2 + 1] = hexDigits[second];
    }

    hexCode[6] = '\0';

    printf("The hex code is #%s", hexCode);

    return 0;
}
