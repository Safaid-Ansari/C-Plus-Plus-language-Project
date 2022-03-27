#include<stdio.h>
#include<conio.h>
int countsum(int);
int main(){
	int i,n,sum=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		sum += i;
	printf("%d = %d\n",countsum(i),sum);	
	}
	
}
int countsum(int x){
	
	for(int i=1; i<x; i++){
		if(i != 1){
			printf(" ");
		}
		printf("%d + ",i);
	}
}
