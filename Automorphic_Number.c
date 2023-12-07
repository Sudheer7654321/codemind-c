#include<stdio.h>

int main() {
    int n, i, s = 0, d, rem = 0, org, q, re = 0;
    scanf("%d", &n);
    org = n; 
    while (n != 0) {
        d = n % 10;
        n /= 10;
        s++;
    }

    int square = org * org; 
    for (i = 1; i <= s; i++) {
        d = square % 10;
        rem = rem * 10 + d;
        square /= 10;
    }
    while (rem != 0) {
        q = rem % 10;
        re = (re * 10) + q;
        rem /= 10;
    }

    if(re==org) printf("Automorphic Number");
    else printf("Not an Automorphic Number");
}
