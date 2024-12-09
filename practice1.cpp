#include<iostream>
using namespace std;
int main()
{
	string  str;
	int a;
	int i;
	cout<<"Enter the number to printed in how many times"<<endl;
	cin>>a;
	cout<<"Enter the chracter to be printed"<<endl;
	cin>>str;
	for(i=0;i<=a;i++)
	{
		 cout << i << " " << str << endl;
	}
}
