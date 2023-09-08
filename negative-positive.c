#include <stdio.h>

void main(void)
{
	char num;
	printf("%s", "Enter a number : ");
	scanf("%d", &num);

	switch(num > 0)
	{
	case 1: printf("%d %s", num, "is positive"); break;

	case 0: 
		switch(num < 0)
		{
		case 1: printf("%d %s", num, "is negative"); break;
		case 0: printf("%d %s", num, "is Zero"); break;
		}// End Switch
	break;
	}// end switch

}// end main.