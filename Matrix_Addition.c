#include<stdio.h>
int main()
{
    int b,c,d=0,e,f,i,j;
    scanf("%d%d",&b,&c);
    int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int arr[x][y];
     for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
        for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            
           d = a[i][j] + arr[i][j]; 
           printf("%d ",d);
        }
        printf("
");
    }
    
    
}