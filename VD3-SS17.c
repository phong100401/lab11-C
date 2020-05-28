#include<stdio.h>
#include<string.h>
void main(){
	char firtname[15];
	char lastname[15];
	printf("Enter your firtname: ");
	scanf("%s",firtname);
	printf("Enter your lastname: ");
	scanf("%s",lastname);
	strcat(lastname,firtname);
	printf("%s",lastname);
	getch();
}
