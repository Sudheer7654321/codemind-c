#include<stdio.h>
int main(){
    int x,y,o;
    scanf("%d%d",&x,&y);
    for(int i=1;i<=y;i++){
        o=x*i;
        if(o%y==0){
            printf("%d",o);
            break;
            
        }
    }
}