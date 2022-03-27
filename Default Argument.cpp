#include<iostream>
#include<conio.h>
using namespace std;
int add(int ,int,int=0);
int main()
{
	int a,b;
	cout<<"Enter Two Number : \n";
	cin>>a>>b;
	cout<<"Sum is "<<add(a,b);
	int c;
	cout<<"\n\nEnter Three Number : \n";
	cin>>a>>b>>c;
	cout<<"Sum is "<<add(a,b,c);
	getch();
}
int add(int x,int y, int z)
{
	return(x+y+z);
}
