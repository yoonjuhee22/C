#include <stdio.h>

int main() {

    int tarr[3][4];

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {
            tarr[i][j] = (i + 1) * (j + 1);
        }
    
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d", tarr[i][j]);
        }
        printf("\n");
    }

}