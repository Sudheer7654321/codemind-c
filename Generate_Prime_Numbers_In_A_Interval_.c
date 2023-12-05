#include<stdio.h>

int main() {
    int l, r, i, j, flag, p;

    scanf("%d %d", &l, &r);

    for (i = l; i <= r; i++) {
        flag = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break; 
            }
        }
        if (flag && i > 1) {
           
            printf("%d
", i);
        }
    }

}
