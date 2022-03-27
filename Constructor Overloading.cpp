#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
	  complex(int x, int y)  //Perameterized Constructor
	  {
	    a=x;
		b=y;  	
	  }
	  void showData()
	  {
	  	cout<<"\na="<<a<<"\nb="<<b;
	  }
	  complex(int k) 
	  {
	    a=k;  	
	  }	
	 
	  complex() //Default Constructor
	  {
	  }
	  complex(complex &c) //Copy Constructor
	  {
	  	a=c.a;
	  	b=c.b;
	  }
};
int main()
{
	complex c1(3,4),c2(5),c3(),c4(c1);
	c1.showData();
	c2.showData();
	c4.showData();
	getch();
}
