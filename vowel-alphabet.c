#include <stdio.h>

void main(void)
{
	char ch;
	printf("%s", "Enter a letter to check it a vowel or consonent :( ");
	scanf("%c", &ch);


	switch((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		case 1: switch(ch)
				{
				case 'A': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'a': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'E': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'e': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'O': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'o': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'I': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'i': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'U': printf("%c %s", ch, "is a vowel :)= "); break;
				case 'u': printf("%c %s", ch, "is a vowel :)= "); break;
				default : printf("%c %s", ch, "is a consonent :^!"); break;
				}// end nested switch.
			break;
		case 0: printf("Enter a latter :("); break;
	}//end switch.
}// end main