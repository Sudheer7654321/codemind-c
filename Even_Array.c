#include <stdio.h>

int main() {
    int n,f=1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
    scanf("%d",&a[i]);
    if(a[i]%2!=0){
        f=0;
    }
}
 printf(f==1 ? "True" : "False");           
}