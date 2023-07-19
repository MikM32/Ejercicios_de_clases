#include <stdio.h>
#include <stdint.h>

uint64_t fibonacci(int n)
{
	if(n==0 || n==1){ return n;}
	else{	return (fibonacci(n-1)+fibonacci(n-2));}
}

void fib_proc(int n, uint64_t* res)
{
	uint64_t  a=0,b=0;

	if(n==0 || n==1)
	{
		*res=n; 
	}
	else
	{
		fib_proc(n-1, &a);
		fib_proc(n-2, &b);
		*res= a+b;
	}
}

int main()
{
	int n=0;
	uint64_t res=0;
	printf("Ingrese un valor para n: ");
	scanf("%d", &n);
	fib_proc(n, &res);
	printf("%lu", res);
	return 0;
}
