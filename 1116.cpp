#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
	int n;
	int ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[i]>a[j]) ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
