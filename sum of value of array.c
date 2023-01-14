#include<stdio.h>
#include<conio.h>
void main(){
	int arr[5],i,sum = 0;
	printf("Enter the value in Array:\n");
	for(i = 0; i < 5; i++){
		printf("index number %d :",i);
		scanf("%d",&arr[i]);
	}
	printf("\nsumation of all index value of array is:");
	for(i = 0; i < 5; i++){
		sum += arr[i];
	}
	printf("\n %d",sum);
	getch();
	
}
