#include<stdio.h>

int main() {
    int n, c, flag = 0, stat = 0;

    scanf("%d", &n);

    while (n > 0) {
        c = n % 10;

        if (c % 2 == 0) {
            flag = 1;
        } else {
            stat = 1;
        }

        n /= 10;
    }

    if (flag && stat) {
        printf("Mixed");
    } else if (flag) {
        printf("Even");
    } else {
        printf("Odd");
    }

}
