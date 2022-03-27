#include<iostream>
#include<conio.h>
using namespace std;
class TwoWayStack
{
	private:
		int capacity;
		int top_left;
		int top_right;
		int *ptr;
	public:
		TwoWayStack(int cap)
		{
			capacity=cap;
			top_left=-1;
			top_right=capacity;
			ptr=new int[capacity];
		}
		~TwoWayStack()
		{
			delete []ptr;
		}
		 void pushLeft(int val );
		 void pushRight(int val);
		 int popLeft();
		 int popRight();
		 int peekLeft();
		 int peekRight();
		 int isEmptyLeft();
		 int isEmptyRight();
		 int isFull();
};
void TwoWayStack::pushLeft(int val)
{
	if(isFull())
	{
		std::cout<<"Stack Overflow";
	}
	else{
		top_left++;
		ptr[top_left]=val;
	}
}
void TwoWayStack::pushRight(int val)
{
	if(isFull())
	{
		std::cout<<"Stack Overflow";
	}
	else{
		top_right--;
		ptr[top_right]=val;
	}
}
int TwoWayStack::popLeft()
{   int val;
	if(isEmptyLeft())
	{
		std::cout<<"Stack is Empty ";
		return(-1);
	}
	else{
		val=ptr[top_left];
		top_left--;
		return(val);
	}
}
int TwoWayStack::popRight()
{
	int val;
	if(isEmptyRight())
	{
		std::cout<<"Stack is Empty ";
		return(-1);
	}
	else{
		val=ptr[top_right];
		top_right++;
		return(val);
	}
}
int TwoWayStack::peekLeft()
{
	if(isEmptyLeft())
	{
		std::cout<<"Stack is Empty ";
		return(-1);
	}
	else{
	   return(ptr[top_left]);
	}
}
int TwoWayStack::peekRight()
{
	if(isEmptyRight())
	{
		std::cout<<"Stack is Empty ";
		return(-1);
	}
	else{
		return(ptr[top_right]);
	}
}
int TwoWayStack::isEmptyLeft()
{
	if(top_left==-1)
	{
		return(1);
	}
	else{
		return(0);
	}
}
int TwoWayStack::isEmptyRight()
{
	if(top_right==capacity)
	{
		return(1);
	}
	else{
		return(0);
	}
}
 int TwoWayStack::isFull()
{
 	if(top_left+1==top_right){
 	return(1);
    }
 else{
 
 	return(0);
     }
}
  int main()
{
   TwoWayStack s(11);
   s.pushLeft(45);
   s.pushLeft(50);
   s.pushLeft(60);
   s.pushLeft(70);
   s.pushRight(30);
   s.pushRight(20);
   std::cout<<s.isEmptyLeft();
   std::cout<<s.isEmptyRight();
   std::cout<<s.isFull();
   
   std::cout<<"\nPeek From Stack 1 :"<<s.peekLeft();
   std::cout<<"\nPeek From Stack 2 :"<<s.peekRight();	
}

