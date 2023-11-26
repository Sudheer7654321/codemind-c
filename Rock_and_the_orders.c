#include <stdio.h>

int main() {
    int d,c;
    scanf("%d%d",&d,&c);
    int a1,a2,a3;
    scanf("%d%d%d",&a1,&a2,&a3);
    int b1,b2,b3,s1,s2;
    scanf("%d%d%d",&b1,&b2,&b3);
   s1=a1+a2+a3;
   s2=b1+b2+b3;
   int t1,t2;
   if(s1>=150 && s2>=150){
       t1=s1+s2+c;
       t2=s1+s2+2*d;
       if(t1<t2) printf("YES");
       else printf("NO");
   }
  else if(s1>=150 && s2<150){
       t1=s1+s2+c;
       t2=s1+s2+d;
       if(t1<t2) printf("YES");
       else printf("NO");
   }
  else if(s1<150 && s2>=150){
       t1=s1+s2+c;
       t2=s1+s2+d;
       if(t1<t2) printf("YES");
       else printf("NO");
   }
   else if(s1<150 && s2<150) printf("NO");
}
    

    
   

