#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

bool chec(long long int n)
{
	if((n==2)||(n==3)||((n%6)==5)||((n%6)==1))
		return true;
	else 
		return false;
}


int main(int argc, char const *argv[])
{
	long long int n;
	cin >> n;
	long long int a=n,b;
	if(a<2)
		a=2;
	
	while(chec(a)||chec(a+n))
	{
		a++;
		// cout << "a";
	}
	// cout << chec(a) << endl;
	// cout << chec(a+n) << endl;

	cout << a+n << " " << a; 
	return 0;
}