    #include<stdio.h>
int main(){
    int X,x,y,z,m,s;
    scanf("%d",&X);
    x=X/3600;
    m=X%3600;
    y=m/60;
    s=m%60;
    z=s%60;
    printf("H:M:S-%d:%d:%d",x,y,z);
    
    
   
}