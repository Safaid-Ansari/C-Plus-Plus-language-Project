#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
	
	private:
		int a;
	public:
	   void setData(int x) 
       {
	   	a=x;
		}
	friend void fun(A,B);	
};
class B
{
	private:
		int b;
	public:
	   void setData(int y)
	   {
	   	b=y;
		}
		friend void fun(A,B);	
};
  void fun(A o1,B o2)
  {
  	cout<<"Sum is "<<o1.a + o2.b;
  }
  int main()
  {
  	A obj1;
  	B obj2;
  	obj1.setData(4);
  	obj2.setData(6);
  	fun(obj1,obj2);
  	getch();
  }
