#include<stdio.h>
#include<stdlib.h>

// Y�ld�zlarla �ekil �izdirme i burada ad�mlara tutuyor j ise her ad�mda ka� y�ld�z �izdirece�ini g�steriyor

int main(){
	
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}	
		printf("\n");
	}
	return 0;
}
