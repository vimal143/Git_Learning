#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=20;i++){
		for(j=1;j<=10;j++){
			if((i+j)%2==0)
			   printf("*");
			else
			   printf(" ");   
		}
		printf("\n");
	}
}
