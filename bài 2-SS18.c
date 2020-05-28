#include<stdio.h>
#include<stdlib.h>
void main(){
	int temp[5][5];
	int i,j;
	int max,min;
	xacdinh_nhietdo_MIN_MAX(temp[i]);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("thanh pho thu %d,nam thu %d: ",i+1,j+1);
			scanf("%d",temp[i][j]);
		}
	}
	for(i=0;i<5;i++){
		printf("> nam thu %d: \n",j+1);
	}
}
void xacdinh_nhietdo_MIN_MAX(int arg[5]){
	int max=0;
	int min=arg[0];
	int i,j;
	int cell=arg[0];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(cell<min){
				min=cell;
			}
			if(cell>max){
				max=cell;
			}
		}
		printf("Thanh pho thu %d max la %d\n",i+1,max);
		printf("thanh pho thu %d max la %d\n",j+1,min);
	}
}
