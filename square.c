#include<stdio.h>
int square();
int main()
{
	int x;
	x = square();
	printf("Square=%d",x);
}
int square()
{
	int a;
	printf("Enter a number=");
	scanf("%d",&a);
    return a*a;
}