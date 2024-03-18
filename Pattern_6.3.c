#include<stdio.h>
int main()
{
    int a,b=1,i,j,k,x;
    scanf("%d",&a);
x=a;
    for(i=0;i<=a-1;i++)
    {
        x=a;
        x=x-i;
        for(j=a-b;j>0;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d ",x);
            x++;
            
        }

        printf("
");
        b++;
    }
}