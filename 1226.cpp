#include<bits/stdc++.h>
unsigned long long b,p,k;
//unsigned long long m=b%k;
using namespace std;
int suan(int x)
{
	if(x==0) return 1;
	else
	{
		int flag=suan(x/2);
		if(x%2==0) return flag*flag%k;
		else return flag*flag*b%k;
	}
} 
int main()
{
	cin>>b>>p>>k;
	cout<<b<<"^"<<p<<" "<<"mod"<<" "<<k<<"="<<suan(p)%k;
	return 0;
}
