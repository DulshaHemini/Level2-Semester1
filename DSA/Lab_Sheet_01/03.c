#include<stdio.h>
int main(){
	int num =  154;
	float f1 = 78.5;
	char ch = 'g';
	
	int *numptr = &num;
	float *flptr = &f1;
	char *chptr = &ch;
	
	
	printf("\n\n%d, %p, %p\n", *numptr, numptr, &numptr);
	printf("%f, %p, %p\n", *flptr, flptr, &flptr );
	printf("%c, %p, %p\n", *chptr, chptr, &chptr);
	
	chptr++;
	printf("\n\nAfter Adding 1 value of ch: %c", ch);
	
	numptr++;
	printf("\nAfter Adding 1 value of num: %d", num);
	
	flptr++;
	printf("\nAfter Adding 1 value of f1: %f", f1);
	
}
