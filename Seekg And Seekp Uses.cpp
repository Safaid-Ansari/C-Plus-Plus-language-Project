/*#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("abc.txt");
	cout<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
	fin.seekg(6);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
	fin.seekg(-2,ios_base::end);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	getch();o
	
	
}*/


#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("abc.txt",ios::ate|ios::app);
	cout<<fout.tellp();
	fout.seekp(2,ios_base::beg);
	cout<<"\n"<<fout.tellp();
	fout.close();
	getch();
	
	
}
