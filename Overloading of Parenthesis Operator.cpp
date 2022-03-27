#include<iostream>
#include<conio.h>
class Matrix
{
	private:
		int a[3][3];
	public:
	    int operator ()(int i, int j)
		{
		  return(a[i][j]);	
		}	
	void printMatrix()
	{
	  int i,j;
	  for(i=0;i<=2;i++){
	  
	  for(j=0;j<=2;j++)
	  std::cout<<a[i][j];
	  std::cout<<"\n";
       }
	}	
};
int main()
{
	Matrix m;
	m(0,0)=1;
	m(0,1)=2;
	m(0,2)=3;
	m(1,0)=4;
	m(1,1)=5;
	m(1,2)=6;
	m(2,0)=7;
	m(2,1)=8;
	m(2,2)=9;
	m.printMatrix();
	getch();
}

