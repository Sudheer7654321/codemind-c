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
       if(a[i]%2==0){
          printf("%d ", a[i]);
       }
    }
     for (int i = 0; i < n; i++) {
        if(a[i]%2!=0){
          printf("%d ", a[i]);
       }
    }
   
}