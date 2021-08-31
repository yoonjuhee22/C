#include <stdio.h>

int main() {
    int num;
    
    printf("╪Ж ют╥б : ");
    scanf_s("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}