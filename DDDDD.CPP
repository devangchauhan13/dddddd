#include<stdio.h>
#include<conio.h>

main()
{
	int n,sum=0,lastdigits,firstdigit;
	printf("enter number=");
	scanf("%d",&n);

	lastdigits=n % 10;

	while(n>=10)
	{
		n =n/10;
	}
	firstdigit=n;
	sum = firstdigit + lastdigits;
	printf("sum is=%d",sum);
}
