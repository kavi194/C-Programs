#include <stdio.h>
#include<ctype.h>
 int main()
{
	char ch;
  	printf(" Please Enter any character :  ");
  	scanf("%c", &ch);
    if (isalpha(ch))
  	{
  		printf("%c is an Alphabet", ch);  	
  	} 
  	else if (isdigit(ch))
  	{
  		printf("\n %c is a Digit", ch);  	
  	}
  	else
    	printf("\n %c is a Special Character", ch);
    return 0;
}