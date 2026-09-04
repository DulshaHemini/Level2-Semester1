#include<stdio.h>
void twice(int *val);

int main(){
	int x ,*y;
	x=56; y=&x;
	twice(&x);
	printf("x value=%d\n",x);
	printf("y memory address=%p\n",y);
	printf("and value of y=%d\n",*y);
	
}
 void twice(int *val){
 	*val=*val*2;
 }
