#include<stdio.h>
int main(){
    int a,b,c,d,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    scanf("%d%d%d",&b,&c,&d);
    c-=d;
    if((c-b)>=0){
        printf("YES
");
    } 
    else {
        printf("NO
");
    }
    }
}