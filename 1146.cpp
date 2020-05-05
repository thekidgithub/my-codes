#include<bits/stdc++.h>
using namespace std;
bool yb[105];
int main()
{
	int n;
	cin>>n;
	cout<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j!=i)
			{
				if(yb[j]==1) yb[j]=0;
				else yb[j]=1;
			}
			cout<<yb[j];
		}
		cout<<endl;
	}
}

