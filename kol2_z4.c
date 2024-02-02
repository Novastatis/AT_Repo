#include <stdio.h>

int main() {
    int x, y, z = 1;
    scanf("%d", &x);
    scanf("%d", &y);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (i != 0 && i != x - 1 && j != 0 && j != y - 1) {
                printf("0 ");
            } else {
                printf("%d ", z); 
                z++;
            }
        }
        printf("\n");
    }
    return 0;
}