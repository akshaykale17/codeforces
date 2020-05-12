#include<iostream>
#include <string.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char s[1000];
		cin >> s;
		int n = strlen(s);
		if(s[n-1]=='o')
			cout << "FILIPINO" << endl;
		if(s[n-1]=='u')
			cout << "JAPANESE" << endl;
		if(s[n-1]=='a')
			cout << "KOREAN" << endl;
	} 
}