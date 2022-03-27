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
		complex operator-()
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return(temp);
		}
};
int main()
{
	complex c1,c2;
	c1.setData(4,5);
	c2=-c1;
	c2.showData();
	getch();
}
