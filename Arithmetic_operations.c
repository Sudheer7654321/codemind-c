#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int s =x+y;
    int d =x-y;
    int p =x*y;
    int q =x/y;
    int r =x%y;
    printf("Sum:%d
",s);
    printf("Difference:%d
",d);
    printf("Product:%d
",p);
    printf("Quotient:%d
",q);
    printf("Remainder:%d
",r);
    
    
}