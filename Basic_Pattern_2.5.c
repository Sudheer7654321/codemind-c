#include<stdio.h>
int main(){
    int x,i,j;
    scanf("%d",&x);
    for(i=64+x;i>=65;i--){
        for(j=x;j>=i-64;j--){
            printf("%c ",i);
        }
        printf("
");
    }
}