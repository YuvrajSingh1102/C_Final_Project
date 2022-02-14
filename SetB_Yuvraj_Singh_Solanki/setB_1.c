#include <stdio.h>
#include <string.h>

char stack[101];
int topValue = -1;

void push(char );
void pop();
char top();
int empty();

int main() {

	int n;
	//printf("Enter the size of the string: ");
	scanf("%d", &n);
	
	char str1[n];
	//printf("Enter the string:\n");
	scanf("%s", str1);

	for(int i = 0; str1[i] != '\0'; i++) 
	{
		if(empty() == 1) 
		{
			push(str1[i]);
		}
		else if(str1[i] != top()) 
		{
			push(str1[i]);
		}
		else 
		{
			pop();		
		}
	}
	if(empty() == 1)
	{
		printf("Empty String\n");	
	}
	else
	{
		for(int i = 0; i <= topValue; i++)
		{
			printf("%c", stack[i]);		
		}
		printf("\n");
	}
return 0;
}

void push(char c) 
{
	stack[++topValue] = c;
}

void pop()
{
	topValue--;
}

char top()
{
	return stack[topValue];
}

int empty() 
{
	if(topValue == -1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
