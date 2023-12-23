#include<stdio.h>
#include <string.h>
int main()
{
    int l=1;
char str[20];
scanf("%[^
]s",str);
for(int i=0;str[i]!=NULL;i++){
    if(str[i]==32){
        l++;
    }
}
printf("%d",l++);
}
