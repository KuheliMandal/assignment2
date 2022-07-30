#include<stdio.h>
int main()
{
    int x,a,a2,b,b2,c,c2,f;
    printf("enter value for x\n");
    scanf("%d", &x);
    a=x/10;
    a2=x%10;
    b=a/10;
    b2=a%10;
    c=b/10;
    c2=b%10;
    f=a2+b2+c2;
    printf("sum=%d",f);
    return 0;
}