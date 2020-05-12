#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,te,flag=0,temp;
	map<int,int> set0;
	map<int,int> set1;
	map<int,int> set2;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> te;
		if(set0.find(te)==set0.end())
		{
			temp=set0.find(te)->second;
			temp++;
			set0.insert(te);
		}
		if(set2.find(te-1)==set2.end())
		{
			if((te-1)!=0)
				set2.insert(te-1);
		}
		if(set1.find(te+1)==set1.end())
		{
			set1.insert(te+1);
		}
	}
	
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> te;
		if(set2.find(te)!=set2.end())
		{
			flag++;
			set2.erase(te);
			set0.erase(te+1);
			set1.erase(te+2);
		}
		else if(set0.find(te)!=set0.end())
		{
			flag++;
			set0.erase(te);
			set2.erase(te-1);
			set1.erase(te+1);
		}	
		else if(set1.find(te)!=set1	.end())
		{
			flag++;
			set1.erase(te);
			set0.erase(te-1);
			set2.erase(te-2);
		}
	}
	cout << flag ;
}
