#include<bits/stdc++.h>
using namespace std;
int a[105],f1[105],f2[105];
int ans=0;
int ans1=0;
int ans2=0;
int main()
{
	int n;
	int j,jj,k,kk;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			f1[j]=1;
			for(jj=1;jj<j;jj++)
			{
				if(a[j]>a[jj]) f1[j]=max(f1[j],f1[jj]+1);
			}
		//	if(f1[j]>ans1) ans1=f1[j];
		ans1=f1[i];
		}
		for(k=i;k<=n;k++)
		{
			f2[k]=1;
			for(kk=i;kk<k;kk++)
			{
				if(a[k]<a[kk]) f2[k]=max(f2[k],f2[kk]+1);
			}
		//	if(f2[k]>ans2) ans2=f2[k];
		ans2=f2[n];
		}
		if(ans1+ans2-1>ans) ans=ans1+ans2-1;
	}
	cout<<n-ans;
	return 0;
} 
