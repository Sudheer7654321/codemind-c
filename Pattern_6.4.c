#include<stdio.h>
int main()
{
    int a,b=1,i,j,k,x;
    scanf("%d",&a);
b=a+65-1;
    for(i=1;i<=a;i++)
    {
        
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%c ",b);
            
            
        }

        printf("
");
        b--;
    }
}