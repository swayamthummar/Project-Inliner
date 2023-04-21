#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int a=50,b=50,ans;
	ans=add(a,b);
	cout<<"Addition ="<<ans;
}
int add(int a1,int a2)
{
	int r;
	r=a1+a2;
	return r;
}
