#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
int main()
{
	LL n,t;
	scanf("%lld%lld",&n,&t);
	printf("%lld %lld",max(t-6*n,0LL),(t-n)/6); 
	return 0;
}
