#include<stdio.h>
#include<stdlib.h>

//3 Basamakl� say�y� basamakla�rna ay�ran program

int main()
{	
	int sayi=486;
	int a,b,c;
	
	c=sayi/100;
	printf("%d\n",c);
	
	b=sayi/10;
	b=b%10;
	printf("%d\n",b);
	
	a=sayi%10;
	printf("%d\n",a);
	return 0;
}
