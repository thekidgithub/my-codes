#include<cstdio>
#include<iostream>
#include<cmath>
#define ll long long
#define MAXN 10000000
using namespace std;
ll a[MAXN],b[MAXN];
int main()
{
	ll n,m,k,ans=0;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(ll i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(ll i=1;i<=m;i++) scanf("%lld",&b[i]);
	for(ll i=1;i<=k;i++)
	{
		if(k%i==0)
		{
			ll sum1=0,sum2=0;
			for(ll j=1;j<=n;j++)
			{
				ll flag=1;
				for(ll ii=j;ii<j+i;ii++)
				{
					if(a[ii]==0) flag=0;
				}
				if(flag) sum1++;
			}
	//		cout<<sum1<<" ";
				for(ll j=1;j<=m;j++)
			{
				ll flag=1;
				for(ll ii=j;ii<j+k/i;ii++)
				{
					if(b[ii]==0) flag=0;
				}
				if(flag) sum2++;
			}
	//		cout<<sum2<<" ";
			ans+=sum1*sum2;
		}
	}
	printf("%lld",ans);
	return 0;
	//** 
}
//��һ���� 1 ����ô���͸��̵ڶ��� 
//��һ����0 ���ڶ���ȫ��0
//�������һ����i��������1�����ܲ���������Ȼ�ᱻ0���ѣ������εĿ����i
//��˳�����k/i���ڵڶ����� k/i��������1�ͺ�
