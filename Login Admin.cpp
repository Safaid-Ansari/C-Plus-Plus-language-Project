#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
class Admin
{
	private:
		char AdminName[30];
		char  AdminPassword[30];
		static int AdminCount;
		
		Admin()
		{
			strcpy(AdminName,"Safaid_Ansari");
			strcpy(AdminPassword,"Ansari");
		}
	public:
	    void showAdmin()
		{
		   std::cout<<"Admin Name     : "<<AdminName;
		   std::cout<<"\nAdmin Password : "<<AdminPassword;	
		}	
		static Admin* getInstance()
		{
			if(AdminCount==0)
			{
				Admin *ptr=new Admin;
				AdminCount++;
				return(ptr);
			}
			else{
				return(NULL);
			}
		}
};
int Admin::AdminCount=0;
int main()
{
	Admin* AdminPointer;
	AdminPointer=Admin::getInstance();
	if(AdminPointer!=NULL)
	{
		AdminPointer->showAdmin();
	}
		else
	{
		std::cout<<"\nNo More Admin Can Be Created : ";
	}
	Admin *p;
	p=Admin::getInstance();
	if(p!=NULL)
	{
		p->showAdmin();
	}
	else
	{
		std::cout<<"\nNo More Admin Can Be Created : ";
    }
    getch();
}
