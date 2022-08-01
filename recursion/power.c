#include <stdio.h>
int m;
int sum(int n)
{
	if (n ==0)
		return 1;
	return m * sum(n - 1);
}
int main()
{
	int num;
    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    scanf("%d",&num);
    scanf("%d",&m);
	printf("%d to the power %d is %d\n", m,num, sum(num));
	return 0;
}

