#include <stdio.h>

void scan(int n, int *a) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int main() {
    int n, f = 0,c=0;
    scanf("%d", &n);
    int a[n];
    scan(n, a);
    for (int i = 0; i < n; i++) {
       f=f+a[i];
    }
    f=f/n;
    for (int i = 0; i < n; i++) {
       if(f<=a[i]){
           c++;
       }
    }
    printf("%d",c);
}   
