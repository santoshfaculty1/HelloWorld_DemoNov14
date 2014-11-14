#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) 
{ 
	int num, k=1, sum=0;
	
	if(argc <= 1) {
		num = 111; //ans 3
	} else {
		num = atoi(argv[1]);
	}
	
	/* Put your logic here to compute the sum of the digits in a given number */
	
	printf("Sum of the digits : %d\n", sum);
	 
	return 0;
} 

