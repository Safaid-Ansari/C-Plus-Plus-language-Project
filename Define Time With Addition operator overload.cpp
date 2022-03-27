#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
	private:
		int HR,MIN,SEC;
	public:
	    void setTime(int h,int m,int s)
		{
	       HR=h;
		   MIN=m;
		   SEC=s;		
		}	
		void showTime()
		{
			cout<<"Time : "<<HR<<":"<<MIN<<":"<<SEC;
		}
		void normalize()
		{
			MIN=MIN+SEC/60;
			SEC=SEC%60;
			HR=HR+MIN/60;
			MIN=MIN%60;
		}
		Time operator +(Time t)
		{
			Time temp;
			temp.SEC=SEC+t.SEC;
			temp.MIN=MIN+t.MIN;
			temp.HR=HR+t.HR;
			return(temp);
		}
};
 int main()
 {
 	Time t1,t2,t3;
 	t1.setTime(23,59,59);
 	t1.showTime();
 	t2.setTime(45,67,78);
 	t2.showTime();
 	t3=t1+t2;
 	t3.showTime();
 	getch();
 }

