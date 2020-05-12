#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	cin >> n;
	long long int no;
	
	while(n--)
	{
		int flag=0;
		cin >> no;
		for(long long int i=1;i<=sqrt(no);i++)
		{
			if((no%i)==0)
			{
				if(no/i==i)
					flag=flag+2;
				else
					flag++;

				if(flag>3)
					break;
			}
		}
		if(flag==3)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}