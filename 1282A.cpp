#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		ll a,b,c,r;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> r;
		ll start,end;
		if(a<b)
		{
			start=a;
			end=b;
		}
		else
		{
			start=b;
			end=a;
		}
		ll left=c-r,right=c+r;
		ll final=0;
		//cout << start <<endl << end << endl << left << endl << right<< endl;
		if(left==right)
			final=end-start;
		else if((start>=left)&&(end<=right))
			final=0;
		else if((start<left)&&(start<right)&&(end<=left)&&(end<=right))
			final=end-start;
		else if((start>=left)&&(start>=right)&&(end>left)&&(end>right))
			final=end-start;
		else if((start>=left)&&(start<=right)&&(end>left)&&(end>right))	
			final=end-right;
		else if((start<left)&&(start<right)&&(end>=left)&&(end<=right))
			final=left-start;
		else if((start<left)&&(end>right))
			final=(left-start)+(end-right);	
		cout << final << endl;
	}
}