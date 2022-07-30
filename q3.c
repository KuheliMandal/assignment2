#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a value for a\n");
    scanf("%d",&a);
    printf("enter a value for b\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swap\nvalue for a =%d\nvalue for b=%d",a,b);
    return 0;
}