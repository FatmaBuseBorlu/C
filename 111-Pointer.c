#include<stdio.h>
#include<stdlib.h>

int main(){
 	
 	int sayi=20;
 	int *s=&sayi;
 	char harf='a';
	char *h=&harf;
	//Sayiyi Ekrana Yazd�rma
	printf("Sayi: %d\n",sayi);
	
	//Adresi Ekrana Yazd�rma
	printf("Adres: %x\n",s);

	//Harfi Ekrana Yazd�rma
	printf("Harf: %c\n",harf);
	
	//Adresi Ekrana Yazd�rma
	printf("Adres: %x",h);
	return 0;
}
