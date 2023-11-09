#include<stdio.h>
int main (){
    int x,y,z,l,m;
    scanf("%d%d%d",&x,&y,&z);
    if(y>x && z>x)
    l=y+z;
    else if (x>y && z>y)
    l=x+z;
    else 
    l=x+y;
    printf("%d",l);
    
}