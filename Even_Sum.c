#include <stdio.h>
int main() {
    int x, lar = 0;
    scanf("%d",&x);
    int arr[x],i,s=0;
    for (i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]%2==0){
             s=s+arr[i];
    }
    }
         printf("%d",s);
}
