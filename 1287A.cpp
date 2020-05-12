#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int final=0;
		char len[100];
		int n;
		cin >> n;
		cin >> len;
		char a[]="A",p[]="P";
		int flag=0;
		int temp=0;
		for (int i = 0; i < n; ++i)
			{
				cout << flag << len[i] << endl;
				if(strcmp(len[i],a[0]))
				{
					flag=1;
					
					continue;
				}
				if((flag==1))
				{
					if(len[i]==p)
					{
						temp++;
						if(temp>final)
							final=temp;	
						continue;
					}
					if(len[i]==a)
					{
						flag=0;
						temp=0;
					}					
					
					
				}
			}	
		cout << final << endl;
	}
}