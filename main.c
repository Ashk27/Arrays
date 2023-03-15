#include<stdio.h>
int main ()
{
	int varA [6] = {10 , 20 , 30 , 40 , 50 , 60};
	int i;
	scanf("%d", &i);
		if (i<0||i>5)
		{
				printf("dose not exist");
		}
		else 
		{
			printf("%d" , varA[i]);
		}
	return 0;
 }  
