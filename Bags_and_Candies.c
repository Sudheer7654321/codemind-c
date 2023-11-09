#include<stdio.h>

int main() {
    int x, y, z, l, m;
    scanf("%d%d%d", &x,&y,&z);
   /* int n=x/4;
    if(x%4!=0)n+=1;
    printf("%d", n);*/
    l=y*z;
    m=x/l;
    if(x%l!=0)m++;
    printf("%d",m);
        
    }
    

    

