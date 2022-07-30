#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value for a");
    scanf("%d", &a);
    printf("enter a value for b");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
printf("After swap\nvalue for a=%d\nvalue for b=%d",a,b);
return 0;

}
