#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int Rno;
	char name[30];
	float marks;
};
int main()
{
	struct student s;
	char ch;
	FILE*fp;
	fp=fopen("StructData.txt","wb");
	if(fp==NULL)
	{
		printf("Cannot file open ");
		exit(0);
	}
	printf("Enter RollNumber Name and Marks \n");
	scanf("%d",&Rno);
	ch=getchar();
	gets(s);
	scanf("%f",&marks);
	fwrite(&s,sizeof(struct student),1,fp);
	fclose(fp);
	getch();
}

/*
  Struct Read from file and print on Console

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int Rno;
	char name[30];
	float marks;
};
int main()
{
	struct student s;
	char ch;
	FILE *fp;
	fp=fopen("StructData.txt","rb");
	if(fp==NULL)
	{
		printf("File not found ");
		exit(0);
	}
	fread(&s,sizeof(struct student),1,fp);
	printf("Student Details ..... ");
	printf("Roll Number =%d ",s.Rno);
	printf("Name = %s ",s.name);
	printf("Marks = %f ",s.marks);
	fclose(fp);
}*/
