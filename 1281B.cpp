#include<iostream>
#include <string.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int i,j,flag=0,flag1=0,flag2=0;
		char s1[5000],s2[5000];
		cin >> s1 >> s2 ;
		int n1=strlen(s1),n2=strlen(s2);
		for(i=0,j=0;i<n1&&j<n2;i++,j++)
		{
			
			if(s1[i]==s2[j])
				flag2++;

			if(s1[i]<s2[j])
			{
				if(flag1==0)
					cout << s1 << "a" <<endl;
				cout << i << endl;
				flag1++;
				break;
			}
			if(s1[i]>s2[j])
			{
				if(flag==0)
				{
					int k=i+1;
					while(k<n1)
					{
						if(s1[k]<s1[i])
						{
							char te=s1[i];
							s1[i]=s1[k];
							s1[k]=te;
							flag++;
							
							if(s1[i]==s2[j])
								flag2++;
							if(s1[i]<s2[j])
							{
							cout << s1  <<endl;
							flag1++;	
							}
							break;
						}
						k++;
					}
							
				}
			} 
			
		}
		
		cout << flag2 << n1 << n2 ;
		if(flag1==0)
		{
			if((flag2==n1)&&(flag2==n2))
			{
				cout << "---" << endl;
				return 0;
			}
			else if(flag2==n1)
			{
				cout << s1 << endl;
				return 0;
			}
			else{
				cout << "---" << endl;
				return 0;
			}
				
		}
	}
}


// GTYYYYYYTTTTTTYZ
// GTYYYYYYYTTTTTTZ