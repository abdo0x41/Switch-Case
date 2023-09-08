#include <stdio.h>

void main(void)
{
	int num;
	printf("%s", "Enter a number : ");
	scanf("%d", &num);

	switch(num & 1)
	{
	case 0: puts("Even"); break; 
	case 1: puts("Odd"); break; 
		
	}// end switch
}// end main