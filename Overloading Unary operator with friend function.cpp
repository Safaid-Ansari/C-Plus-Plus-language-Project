#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
	   void setData(int x,int y)
	   {
	   	a=x;
	   	b=y;
		}
		void showData()
		{
			cout<<"a="<<a<<"\nb="<<b;
		}
		friend complex operator-(complex);
};
  complex operator-(complex X){
  	complex temp;
  	temp.a=-X.a;
  	temp.b=-X.b;
  	return(temp);
  }
  int main()
  {
  	complex c1,c2;
  	c1.setData(4,5);
  	c2=-c1;
  	c2.showData();
  	getch();
  }
