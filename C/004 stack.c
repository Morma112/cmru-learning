#include<stdio.h>
factorial(int n)
{
	if (n == 0)
	{ return 1; }
	else{
		return n*factorial(n-1);
	}
}
main()
{
	int num,fac;
	printf("Input Number = ");
	scanf("%d",&num);
	fac = factorial(num);
	printf("%d ! = %d",num,fac);
}
