#include<iostream>
#include<conio.h>
using namespace std;
int area(int);
int area(int,int);
int main()
{
	int r;
	cout<<"Enter Redius of a Circle : ";
	cin>>r;                                       
	float A=area(r);
	cout<<"Area of a Circle "<<A;
	int l,b,a;
	cout<<"\n\nEnter Length and Breath of a Ractangle : \n";
	cin>>l>>b;
	a=area(l,b);
	cout<<"Area of a Ractangle "<<a;
	getch();
}
int area(int R)
{
	return(3.14*R*R);
}
int area(int L,int B)
{
	return(L*B);
}
