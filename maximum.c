// Write a progra to check the maximaum number between two numbers.

#include <stdio.h>

void main(void)
{
	int n1, n2;

	printf("%s","Enter Two Numbers :) : ");
	scanf("%d %d", &n1, &n2);

	switch((n1 > n2) - (n1 < n2))
	{
	case 1: printf("%d %s %d", n1, "is greater than ", n2); break;
	case -1: printf("%d %s %d", n1, "is Less than ", n2); break;
	default : printf("%d %s %d", n1, "are equal :)", n2); break;

	}//end switch
}// end main //