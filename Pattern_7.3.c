#include<stdio.h>
int main()
{
    int a,b=1,i,j,k,x;
    scanf("%d",&a);
x=a;
    for(i=a;i>=1;i--)
    {
        x=a;
        x=x-i;
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",k);
            x++;
            
        }

        printf("
");
        b++;
    }
}