#include<stdio.h>
#include<string.h>
void main(){
	int num[5],ctr,average=0;
	int average_arr(int num_arr[]);
	for(ctr=0;ctr<5;ctr++){
		printf("Enter number %d: \n",ctr+1);
		scanf("%d",&num[ctr]);
	}
	average=average_arr(num);
	printf("The average of the array is %d\n",average);
	getch();
}
int average_arr(int num_arr[]){
	int i,total;
	for(i=0,total=0;i<5;i++){
		total +=num_arr[i];
	}
	return total/5;
}
