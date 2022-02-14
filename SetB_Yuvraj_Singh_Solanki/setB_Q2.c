#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
struct grandChildren
{
	char child[8];
	char father[8];
}g[5];

void countGrandchildren(char []);
	
int main()
{
	FILE *fp;
	fp = fopen("file.txt", "r");
	char name[20];
	int count=0;
	
	for(int k=0; k<5;k++)
	{
		int a=0, line=1;
		while(line--)
		{
	    	fscanf(fp,"%s",&g[k].child[a]);
	    	a++;
		} 
	
		a=0, line=1;
		while(line--)
		{
	    	fscanf(fp,"%s",&g[k].father[a]);
	    	a++;
		}  
	}
	
	void countGrandchildren(char name[])
	{
		for(int j = 0; j < 5; j++)
		{
			if(strcmp(name,g[j].father)==0)
			{
				count++;
			}
	        }
	}
	
	printf("Enter the name: ");
	scanf("%s", name);

	for(int i = 0; i < 5; i++)
	{
		if(strcmp(g[i].father,name) == 0)
			countGrandchildren(g[i].child);
	}
	printf("Grandchildren are: %d\n",count);
	fclose(fp);
return 0;
}
