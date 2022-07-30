#include<stdio.h>
int main()
{
	int rupees;

	printf("Please enter rupees:");
	scanf("%d", &rupees);

	float dollars = rupees /70;

	printf("%f dollars", dollars);
}
