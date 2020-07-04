#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string str;
		cin>>str;
		long long int n=str.length(),i,rum=0;
		for(i=0;i<n;i++)
		{
			if((str[i]=='x'&&str[i+1]=='y')||(str[i]=='y'&&str[i+1]=='x'))
			{
				rum++;
				i+=1;
			}
		}
		cout<<rum<<endl;
	}
	return 0;
}