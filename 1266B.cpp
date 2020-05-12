#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	while(n--)
	{
		long long int k;
		cin >> k;

		if(k<15)
		{
			cout << "NO" << endl;
			continue;
		}
		k=k%14;
		


		if((k<=6)&&(k>0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}