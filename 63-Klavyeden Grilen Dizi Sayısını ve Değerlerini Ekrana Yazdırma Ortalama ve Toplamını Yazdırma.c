#include<stdio.h>
#include<stdlib.h>

int main(){
	int dizi[100];
	int i,sayi,ort,toplam;
	printf("Eleman Sayisi:");
	scanf("%d",&sayi);
	
		for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d. elemanini gir",i+1); // Bu sat�r, kullan�c�ya "Dizinin 1. eleman�n� gir", "Dizinin 2. eleman�n� gir" gibi bir ��kt� verir
		scanf("%d",&dizi[i]);
		
		toplam=toplam+dizi[i];
		ort=toplam/sayi;

	}
		printf("Toplam=%d\n",toplam);
 		printf("Ort=%d",ort);
	return 0;
}
