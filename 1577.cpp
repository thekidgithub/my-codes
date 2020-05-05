#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,k,ans=0;
double a[100000000];
int b[100000000];
int sum=0;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&a[i]);
		a[i]*=100;
		sum+=a[i];
	}
	sort(a+1,a+n+1);
	double l=0;double r=a[n];
	int ll,rr;
//	cout<<l<<" "<<r;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(mid==0) break;
	//	cout<<mid<<" "<<endl;
		int cnt=0;
		for(int i=1;i<=n;i++) b[i]=a[i];
		for(int i=1;i<=n;i++)
		{
			while(b[i]-mid>0)
			{
				b[i]-=mid;
				cnt++;
			}
		}
		if(cnt>=k)
		{
			l=mid+1;
			ans=mid;
			cout<<ans<<endl;
		}
		//too short,find longer
		if(cnt<k)
		r=mid-1;//too long,find shorter
	//	else
	//	{
	//		l=mid,r=mid;
			//cout<<ll<<" "<<rr<<endl;
	//	}
		cout<<l<<" "<<r<<endl;
	}
	printf("%.2lf",ans/100);
	return 0;
}
