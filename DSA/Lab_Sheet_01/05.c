#include <stdio.h>
typedef struct AA{
int x;
} AA;
int main(){

	AA structure;
	AA *ptr;
	structure.x = 46 ;
	ptr = &structure; 
	printf("x is=%d\n",ptr->x);
	return 0;
	
}
