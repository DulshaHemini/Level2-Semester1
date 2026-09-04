#include<stdio.h>
int main(){
	const int MAX_SIZE = 10 ;
	int arr[MAX_SIZE];
	int i, Tot =0;
	printf("Enter %d elements in the array: \n", MAX_SIZE);
	for(i=0; i<MAX_SIZE; i++){
		scanf("%d", &arr[i]);
		Tot = Tot + arr[i];
	}
	printf("Elements in array are: ");
	for(i=0; i<MAX_SIZE; i++){
		printf("%d, ", arr[i]);
	}
	printf("\nSummation Of Numbers: %d", Tot);
	
	int i = 0;
	
	printf("My Name is: ");
	char name[] = {"Dulsha Hemini"};
	int len = sizeof(name);
	for(i=0; i<len ; i++){
		printf("%c", name[i]);
	}
	
	return 0;
	
	
}
