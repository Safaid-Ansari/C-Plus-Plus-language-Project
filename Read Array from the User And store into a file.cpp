#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i;
	FILE *fp;
	fp=fopen("ArrayData.txt","wb");
	if(fp==NULL)
	{
		printf("Cannot open file ");
		exit(0);
	}
	printf("Enter Values : \n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	fwrite(a,sizeof(int),10,fp);
	fclose(fp);
	getch();
}

/*  
 Read Array from file and print on console 

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()

{
	int a[10],i;
	FILE *fp;
	fp=fopen("ArrayData.txt","rb");
	if(fp==NULL)
	{
		printf("File not found ");
		exit(0);
	}
	fread(a,sizeof(int),10,fp);
	
		printf("File Contains.... ");
		for(i=1;i<=10;i++)
		{
			printf("%d ",a[i]);
		}
		fclose(fp);
	
}*/
