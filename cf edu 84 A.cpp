#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(k>n) cout<<"NO"<<endl;
		else
		{
				float a=sqrt(n);
		if(n%2==k%2&&k<=a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		}
 	
	}
	return 0;
}
