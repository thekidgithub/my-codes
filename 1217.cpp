#include<bits/stdc++.h>
using namespace std;
int pd(int x)
{
	if(x==1) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int p2(int x)
{
	if(x%10==x/10) return 1;
	else return 0;
}
int p3(int x)
{
	if(x/100==x%10) return 1;
	else return 0;
}
int p4(int x)
{
	if((x/1000==x%10)&&(x/10%10==x/100%10)) return 1;
	else return 0;
}
int p5(int x)
{
	if((x/10000==x%10)&&(x/10%10==x/1000%10)) return 1;
	else return 0;
}
int p6(int x)
{
	if((x/100000==x%10)&&(x/10%10==x/10000%10)&&(x/100%10==x/1000%10)) return 1;
	else return 0;
}
int p7(int x)
{
	if((x/1000000==x%10)&&(x/10%10==x/100000%10)&&(x/100%10==x/10000%10)) return 1;
	else return 0;
}
int p8(int x)
{
	if((x/10000000==x%10)&&(x/10%10==x/1000000%10)&&(x/100%10==x/100000%10)&&(x/1000%10==x/10000%10)) return 1;
	else return 0;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(i<10) if(pd(i)==1) cout<<i<<endl;
		else if(i<100) if(pd(i)==1&&p2(i)==1) cout<<i<<endl;
		else if(i<1000) if(pd(i)==1&&p3(i)==1) cout<<i<<endl;
		else if(i<10000) if(pd(i)==1&&p4(i)==1) cout<<i<<endl;
		else if(i<100000) if(pd(i)==1&&p5(i)==1) cout<<i<<endl;
		else if(i<1000000) if(pd(i)==1&&p6(i)==1) cout<<i<<endl;
		else if(i<10000000) if(pd(i)==1&&p7(i)==1) cout<<i<<endl;
		else if(pd(i)==1&&p8(i)==1) cout<<i<<endl;
	}
	return 0;
}
