#include <stdio.h>
int sum(n){
	if (n==0){
		return 0;
	}
	return n+sum(n-1);
}
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	printf("%d",sum(n));
}

