#include<bits/stdc++.h>
using namespace std;
int a[30005];
int main()
{
	int w,n;
	int ans=0;
	cin>>w>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int i=1,j=n;
	while(i<=j)
	{
		if(a[i]+a[j]>w) 
		{
			j--;
			ans++;
		}
		else 
		{
			i++;j--;ans++;
		}
	}
	cout<<ans;
	return 0;
} 
