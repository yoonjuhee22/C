#include <stdio.h>

int main() {
    int tarr[10][11];

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 11; j++) {
            tarr[i][j] = j;
        }
      
    }
    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 11; j++) {
            printf("%d", tarr[i][j]);
        }
        printf("\n");
    }
}