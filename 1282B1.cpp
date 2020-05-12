#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	while(n--)
	{
		ll n,p;
		cin >> n;
		cin >> p;
		vector<int> pri;
		pri.resize(n);
		for (ll i = 0; i < n; ++i)
		{
				cin >> pri[i];
		}		
		sort(pri.begin(),pri.end());
		ll i = n-1;
		while(i!=-1)
		{
			if(find(pri.begin(),pri.end(),p-pri[i])!=pri.end())
			{
				int pos=find(pri.begin(),pri.end(),p-pri[i])-pri.begin()+1;
				cout << pos << pri[pos] <<  endl;
			}
			i--;
		}
	}
}