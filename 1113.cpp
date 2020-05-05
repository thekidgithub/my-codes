#include<bits/stdc++.h>
using namespace std;
int f[10000];
int main()
{
	int n,l,c,ans;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&i,&l);
		f[i]=l;
		scanf("%d",&c);
		while(c!=0)
		{
		f[i]=max(f[i],f[c]+l);
		//f[i]+=l;
		ans=max(ans,f[i]);
		scanf("%d",&c);
		}
	}
	printf("%d",ans);
	return 0;
}

