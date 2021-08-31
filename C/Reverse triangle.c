#include <stdio.h>

int main() {
    int num;
    printf("╪Ж ют╥б :");
    scanf_s("%d", &num);

    for (int i = num; 0 < i; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}