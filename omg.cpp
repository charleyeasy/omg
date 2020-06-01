#include <iostream>
using namespace std;

int add(int x,int y)
{
	return x+y;
}

int minus(int x,int y)
{
	return x-y;
}

int multi(int x,int y)
{
	return x*y;
}

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<add(x,y)<<endl;
	cout<<minys(x,y)<<endl;
	cout<<multi(x,y)<<endl;
	return 0; 
}
