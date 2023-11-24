#include<stdio.h>
int main(){
    int x,i,j;
    scanf("%d",&x);
    for(i=65;i<=64+x;i++){
        for(j=1;j<=x;j++){
            printf("%c ",i);
        }
        printf("
");
    }
}