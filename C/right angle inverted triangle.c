#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num; 
    printf("╪Ж ют╥б : ");
    scanf("%d", &num);

    for (int i = num; 0 < i; i--) {

        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}