#include <stdio.h>

int main() {
    int x,y,n,k,s,b,r,t,o;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    r=n-k;
    o=x*k;
    if(x<y){
    t=x*r+o;
    }
    else if(x>y) {
        t=y*r+o;
    }
    printf("%d",t);
}
    

    
   

