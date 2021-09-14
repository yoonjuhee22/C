#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {

        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }

        printf("\n");


    }
    return 0;

}