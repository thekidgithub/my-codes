#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n==1) cout<<"1/1";
			for(int i=1;i<=n;i++)
		{
				if((i+1)*i/2<n&&n<=(i+2)*(i+1)/2)
				{
					if(n%2==1)
					{
						cout<<n-(i+1)*i/2<<"/"<<(i+2)-(n-(i+1)*i/2);
						return 0;
					}
					else
					{
						cout<<(i+2)-(n+1-(i+1)*i/2)<<"/"<<n+1-(i+1)*i/2;
						return 0;
					}
				}
		} 
		return 0;
}
