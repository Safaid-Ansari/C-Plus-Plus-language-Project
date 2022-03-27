#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
	 void setData(int x, int y)
	 {
	 	a=x;
	 	b=y;
	}
	void showData()
	{
	  cout<<"a="<<a<<"\nb="<<b;	
	}	
	friend ostream& operator<<(ostream& , complex );
	friend istream& operator>>(istream&,complex &);
};
ostream& operator<<(ostream &dout,complex C)
{
	cout<<"\na="<<C.a<<"\nb="<<C.b;
	return(dout);
}
istream& operator>>(istream &din,complex &C)
{
	cin>>C.a>>C.b;
	return(din);
}
int main()
{
	complex c1;
	cout<<"Enter Two Complex Number \n";
	cin>>c1;
	cout<<c1;
	getch();
}
