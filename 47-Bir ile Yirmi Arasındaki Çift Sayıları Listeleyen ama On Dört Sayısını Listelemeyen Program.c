#include<stdio.h>
#include<stdlib.h>

// 1 ile 20 aras�ndaki �ift say�lar� listeleyen ama 14 say�s�n� listelemeyen program 

int main(){	

	int i=1;
	
	for(i=1;i<=20;i++)
	{
		if(i%2==0 && i!=14)
		{
		printf("%d\n",i);
		
		}
	}
		
	return 0;
}
