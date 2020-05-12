#include <cstdio>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	long int t;
	cin >> t;
	map<string,int>temp;
	while(t--)
	{
		string s;
		cin >> s;
		if(temp.find(s)==temp.end())
		{
			temp.insert(pair<string,int>(s,0));
			cout << "OK" << endl;
		}
		else
		{
			int n = temp.find(s)->second;
			n++;
			temp[s]=n;
			cout << s+to_string(n) << endl;
		}

	}
}