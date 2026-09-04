#include<stdio.h>

void change(int x, int y);
void pchange(int *a, int *b);

int main(){
	int num1 , num2 ;
	printf("Enter the  First Number:  ");
	scanf("%d", &num1);
	
	printf("Enter the Second Number: ");
	scanf("%d", &num2);
	
	printf("\nBefore Change(): num1= %d, num2 = %d\n", num1, num2);
	
	change(num1, num2);

   printf("After change() (pass by value): num1 = %d, num2 = %d\n", num1, num2);

   pchange(&num1, &num2);

   printf("After pchange() (pass by reference): num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
void change(int x, int y){
	int temp = x;
	x = y ;
	y= temp;
}

void pchange(int *a, int *b){
	int temp = *a;
	*a = *b ;
	*b = temp ;
}
