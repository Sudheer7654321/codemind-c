    #include<stdio.h>
    #include<math.h>
int main(){
    int X,Y,x,y;
    scanf("%d%d%d%d",&X,&Y,&x,&y);
    int a=(X-x)*(X-x),b=(Y-y)*(Y-y);
    float d=sqrt((a)+(b));
    printf("%.4f",d);
}