#include<iostream>
#include<conio.h>
class Time
{
	private:
		int HR,MIN,SEC;
	public:

 void setTime(int h,int m, int s)
	   {
	      HR=h,MIN=m,SEC=s;   	
	   }	
 void showTime()
	   {
	   	 std::cout<<"Time : "<<HR<<":"<<MIN<<":"<<SEC;
	   }
 void  normalize()
 {
     MIN=MIN+SEC/60;
	 SEC=SEC%60;
	 HR=HR+MIN/60;
	 MIN=MIN%60; 	
 }
};
 int main()
 {
 	Time t1;
 	t1.setTime(21,73,78);
 	t1.showTime();
 	t1.normalize();
 	std::cout<<"\n\n";
 	t1.showTime();
 	getch();
 }	   
	   
