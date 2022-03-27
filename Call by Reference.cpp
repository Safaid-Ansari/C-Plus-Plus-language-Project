#include<iostream>
#include<conio.h>
using namespace std;
int sum(int&,int&);
int main()
{
	int a,b;
	cout<<"Enter Two Number : \n";
	cin>>a>>b;
	int s=sum(a,b);
	cout<<"Sum is "<<s;
	getch();
}
int sum(int&x,int&y)
{
	return(x+y);
}
