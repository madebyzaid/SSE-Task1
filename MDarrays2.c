//Program to show the declaration of multi-dimensional arrays without inside braces.

#include <stdio.h>
int main() {
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}