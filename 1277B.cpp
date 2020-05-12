#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		int ans=0;
		cin >> n;
		set<long long int> temp;
		long long int a;
		for(long long int i=0;i<n;i++)
		{
			cin >> a ;
			if(a%2==0)
			{
				while(a%2!=1)
				{
					if(temp.find(a)==temp.end())
					{
						temp.insert(a);
						ans++;
					}
					else
						break;
					a=a/2;
				}
			}
		}
		cout << ans<< endl;
	}
}