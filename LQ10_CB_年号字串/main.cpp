// ���Ȿ����Ϊʮ������ת26������,���Կ�����Excel���м���

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main()
{
	char num[27]={0,'A'};
	for(int i=2;i<27;i++)
		num[i]=num[i-1]+1;
	int n=2019;
	string ans="";
	while(n)
	{
		int t=n%26;
		ans=num[t]+ans;
		n/=26;
	}
	cout<<ans<<endl;
	return 0;
}
