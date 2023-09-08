#include <stdio.h>


void main(void)
{
	char week;

	printf("Enter day number : ");
	scanf("%d", &week);

	switch(week)
	{
	case 1: printf("%s", "Monday"); break;
	case 2: printf("%s", "Tuesday"); break;
	case 3: printf("%s", "Wednesday"); break;
	case 4: printf("%s", "Thursday"); break;
	case 5: printf("%s", "Friday"); break;
	case 6: printf("%s", "Saturday"); break;
	case 7: printf("%s", "Sunday"); break;

	}// end switch.

}