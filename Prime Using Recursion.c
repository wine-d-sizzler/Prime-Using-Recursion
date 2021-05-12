#include <stdio.h>
int isPrime(int,int);
int main()
{
	int n,prime;
	printf("Enter a number: ");
	scanf("%d",&n);
	prime = isPrime(n, n/2);
    if(prime == 1)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}
int isPrime(int m,int i)
{
    if(i==1)
        return 1;   // return statement terminates the recursive funtion
    else
    {
        if(m%i==0)
            return 0;
        else
            isPrime(m,i-1);    // recursive call not using return statement
    }
}
