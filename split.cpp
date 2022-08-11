#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<string> split( string s , char c )
{
	// will split string s according to char c
	int l = s.length();
	int a = 0 ;
	s+=c;
	vector<string> v;
	cout<<s<<endl;
	int i = 0 ;
	for( i = 0 ; i<l ; i++)
	{
		if( s[i] == c )
		{
			v.push_back(s.substr(a,i-a));
			a=i+1;
		}
	}
	return v;
}

int main()
{
	string s;
	getline(cin,s);
	vector<string> v = split(s,' ');
	for( auto it : v)
	{
		cout<<it<<" , ";
	}
	cout<<endl;
	return 0 ;
}

			
