#include<cstdio>
#include<iostream>
#include<string>
#include<string.h> 
using namespace std;
bool pd(string &s,int x,int y)
{
	while(x<=y&&s[x]==s[y]) x++,y--;
	return x>y;//���������ң������λ��� 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=0,r=s.length()-1;
		while(l<r&&s[l]==s[r]) l++,r--;//���������˵Ļ��� 
		int ll=l,rr=r;
		while(rr>=l)
		{
			if(pd(s,l,rr)) break;
			rr--;
		}//���Ҷ˵������� 
		while(ll<=r)
		{
			if(pd(s,ll,r)) break;
			ll++;
		}//����˵������� 
		if(rr-l>=r-ll)//�Ƚ��������ĶΣ�ȡ��� 
		cout<<s.substr(0,l)<<s.substr(l,rr-l+1)<<s.substr(r+1)<<endl;
		else
		cout<<s.substr(0,l)<<s.substr(ll,r-ll+1)<<s.substr(r+1)<<endl;//�����Բ���������û����233 
	}
	return 0;
}
