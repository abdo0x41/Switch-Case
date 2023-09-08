#include <stdio.h>


void main(void)
{

	int n1, n2;
	char op;

	printf("%s", "Enter Two numbers :-) : ");
	scanf("%d %c %d", &n1, &op, &n2);

	switch(op)
	{
		
		case '+': printf("%d + %d = %d", n1, n2, (n1 + n2)); break;
		case '-': printf("%d - %d = %d", n1, n2, (n1 - n2)); break;
		case '*': printf("%d * %d = %d", n1, n2, (n1 * n2)); break;
		case '/': printf("%d / %d = %d", n1, n2, (n1 / n2)); break;
		case '%': printf("%d %% %d = %d", n1, n2, (n1 % n2)); break;
		
	}// end switch.

}// end main