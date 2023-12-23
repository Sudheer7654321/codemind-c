#include<stdio.h>
#include<string.h>
int main()
{
    int i=1,l=0;
    char str[20];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==65||str[i]==97||str[i]==69||str[i]==101||str[i]==111||str[i]==79||str[i]==73||str[i]==105||str[i]==117||str[i]==85)
        {
            l++;
        }
    }
    printf("%d",l);
}