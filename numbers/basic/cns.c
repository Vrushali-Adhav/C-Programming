#include<stdio.h>
int main()
{
	char ch;
	printf("enter character = ");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("you enter character !!!!");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("you enter digit !!!!");
	}
	else
	{
		printf("you enter symbol");
	}
}
