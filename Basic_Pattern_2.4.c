#include<stdio.h>
int main(){
    int x,i,j;
    scanf("%d",&x);
    for(i=x;i>=1;i--){
        for(j=i;j<=x;j++){
            printf("%d ",j);
        }
        printf("
");
    }
}