#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool not_prime[1000001];
bool  isPrime(int x)
{
int limit = sqrt(x);
for (int i = 2; i <= limit; ++i)
{
if (x % i == 0)
{
return 0;
}
}
return 1;
}
void main()
{

int primeCount = 0;
for (int i = 0; i < 1000000; ++i)
{

	if(not_prime[i])continue;
if (isPrime(i))
{

	for(int j=2*i; j<1000000; j+=i)
				not_prime[j]=1;



++primeCount;
}
}
}
