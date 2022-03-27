#include<iostream>
#include<conio.h>
class Ractangle
{
	private:
		int length,breath;
	public:
	   void setDimension(int l , int b)
	   {
	     length=l; breath=b;   	
	   }	
	   void showDimension()
	   {
	   	 std::cout<<"\nLength And Breath of Ractangle are "<<length<<" And "<<breath;
	   }
	   int getArea()
	   {
	   	return(length*breath);
	   }	   
	   int getPerameter()
	   {
	   	
	   	 return(2*(length+breath));
	   }
};
 int main()
 {
 	Ractangle r1,r2;
 	r1.setDimension(30,9);
 	r2.setDimension(40,8);
 	r1.showDimension();
 	std::cout<<"\nArea of Ractangle is "<<r1.getArea();
 	std::cout<<"\nPerameter of Raactangle is "<<r1.getPerameter();
    std::cout<<"\n\n";
 	r2.showDimension();
 	std::cout<<"\nArea of Ractangle is "<<r2.getArea();
 	std::cout<<"\nPerameter of Raactangle is "<<r2.getPerameter();
 	getch();
 }
