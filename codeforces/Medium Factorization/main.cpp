#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//int p[10000000];
vector<int>p(1e7+1 , 0 );
void sieve(){
	p[0] = p[1] = 1;
	for (int i = 2; i*i <= p.size(); i++)
  		if (!p[i])
	    	for (int j = i*i; j <= p.size(); j += i)
	    		if(!p[j]) p[j] = i;
}
vector<int >v;
int main()
{
    cin.tie(0);
    int n;

    sieve();

    while(scanf("%i", &n) != EOF){
        if(n==1)printf("1");
        else
        {


            int t  =n;

         cout << "1 x" ;
	while(p[n] != 0 && n % p[n] == 0){
		printf(" %d x", p[n]);
		if(p[n] == 0) break;
		n /= p[n];
	}
	printf(" %d\n", n);

    }
    }

    return 0;
}
