#include<iostream>
#include<conio.h>
class Time
{
	private:
		int HR,MIN,SEC;
	public:
	void SetTime(int a, int b, int c)
	{
      HR=a,MIN=b,SEC=c;		
	}	
	ShowTime()
	{
		std::cout<<HR<<":"<<MIN<<":"<<SEC;
	}
	int operator >(Time t)
	{
		if(HR>t.HR)
		return(1);
		else if(HR<t.HR)
		return(0);
		else if(MIN>t.MIN)
        return(1);
        else if(MIN<t.MIN)
        return(0);
        else if(SEC>t.SEC)
        return(1);
        else if(SEC<t.SEC)
        return(0);
		
	}
};

int main()
{
	Time t1,t2;
	t1.SetTime(13,56,23);
	t2.SetTime(23,45,35);
	if(t1>t2)
	t1.ShowTime();
	else
	t2.ShowTime();
	getch();
}
