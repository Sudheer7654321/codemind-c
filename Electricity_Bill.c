#include<stdio.h>
int main(){
    int u;
    scanf("%d", &u);
    float c,b,s=0,t;
    if(u<199) c=1.20;
    else if(u>=200 && u<400)c=1.40;
    else if(u>=400 && u<600)c=1.60;
    else if(u>=600 && u<800)c=1.80;
    else c=2.00;
    b=u*c;
    if(b>400){
        s=15*b/100;
    }
    t=b+s;
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",s);
    printf("Total Amount: %.2f",t);
}