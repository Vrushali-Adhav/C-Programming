#include<stdio.h>
#include<malloc.h>
#define size 20
int main()
{
	
	/*int num;
	printf("enter size of string: ");
	scanf("%d",&num);
	if(num>=size||num<=0)
	{
		printf("invalid size");
	}*/
	char str[size];
	printf("enter a string ");
	scanf("%s",&str);
	
	printf("you enter  %s  string\n",str);
	char i,j,k;
	char* last;
	char* start;
	char* middle;
	

	
	//printf("%c ",i);
	for(i=0;i<'\0';i++)
	{
	printf("%c",i);
		for(j=1;j<'\0';j++)
		{
			printf("%c",j);
			printf("%c %c\n",str[i],str[j]);
			if(str[i]==str[j])
			{
				last = str[i];
				start = str[j];
			}
			else
			{
				middle = str[i];
			}
			
		
		}
	}
	printf("%c %c %c",start,middle,last);
	/*
for(k=0;k<num;k++)
{
	if(str[k]!=str[k+1])
	{
		j=str[k];
	}
}*/
	return 0;
	
}

