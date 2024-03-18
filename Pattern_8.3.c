#include <stdio.h>
#include <stdlib.h>

int main() {
    int size,i,j;
    scanf("%d", &size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(j==i || j==size-i-1){
                printf("%d",size-i);
            }
            else printf(" ");
        }
        printf("
");
    }
}
    