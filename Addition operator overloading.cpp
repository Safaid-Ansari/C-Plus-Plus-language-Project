#include<iostream>
#include<conio.h>
using namespace std;
class Complex
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
	  Complex operator+(Complex C)
      {
          Complex temp;
          temp.a=a+C.a;
          temp.b=b+C.a;
          return(temp);
	  }
};
int main()
{
	Complex c1,c2,c3;
	c1.setData(4,5);
	c2.setData(6,12);
	c3=c1+c2;
	c3.showData();
	getch();
	
	
}
