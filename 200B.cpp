#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double te;
	double ans=0;
	for(int i=0;i<n;i++)
	{
		cin >> te;
		ans=ans+(te/100); 
	}
	cout << (ans*100)/n;
}