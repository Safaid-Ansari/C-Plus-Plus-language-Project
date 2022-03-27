#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private:
		int x;
	public:
	    void setData(int a)
		{
			x=a;
		}
		void showData()
		{
	      cout<<"\nx="<<x;		
		}	
		complex operator++()    //Preincrement
		{
			complex temp;
			temp.x=++x;
			return(temp);
		}
		complex operator++(int)  //Postincrement
		{
			complex temp;
			temp.x=x++;
			return(temp);
		}
};
int main()

{
	complex i1,i2;
	i1.setData(4);
	i1.showData();
	i2=i1++;
	i1.showData();
	i2.showData();
	getch();
}
