#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int Rno;
	char name[20];
	float marks;
};
int main()
{
	struct student s[3];
	int i;
	char ch;
	FILE *fp;
	fp=fopen("StructData1.txt","wb");
	if(fp==NULL)
	{
		printf("Cannot open file ");
		exit(0);
	}
	printf("Enter Roll Number , Name, Marks of 3 Students  :\n");
	for(i=1;i<=3;i++)
	{
		scanf("%d",&s[i].Rno);
		ch=getchar();
		gets(s[i].name);
		scanf("%f",&s[i].marks);
	}
	fwrite(s,sizeof(struct student),3,fp);
	fclose(fp);
	
}
/*
Read Array of Structure from file and print on console  
 

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int Rno;
	char name[20];
	float marks;
};
int main()
{
	struct student s[3];
	int i;
	char ch;
	FILE *fp;
	fp=fopen("StructData1.txt","rb");
	if(fp==NULL)
	{
		printf("File Not Found ");
		exit(0);
	}
	fread(s,sizeof(struct student ),3,fp);
	for(i=1;i<=3;i++)
	printf("Student Details .....\n");
	{
		printf("Roll Number = %d ",s[i].Rno);
		printf("\nName = %s ",s[i].name);
		printf("\\nMarks = %f ",s[i].marks);
	}
	fclose(fp);
}
