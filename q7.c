#include<stdio.h>
int main()
{
    int x,count=0;
    int result = 0;
    printf("enter value for x\n");
    scanf("%d", &x);
    result=x&1;
    count++;
    if(result == 1)
    {
        printf("%d",count);
    }
    x = x>>1;
    result=x&1;
    count++;
    if(result == 1)
    {
        printf("%d",count);
    }
    x = x>>1;
   
    return 0;

}