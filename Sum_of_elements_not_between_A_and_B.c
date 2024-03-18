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
    int x,m;
    scanf("%d%d",&x,&m);
    for (int i = 0; i < n; i++) {
       if(a[i]<x || a[i] > m){
         c=c+a[i];
       }
    }
     printf("%d",c);
    }
   
