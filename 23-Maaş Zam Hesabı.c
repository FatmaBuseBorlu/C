#include<stdio.h>
#include<stdlib.h>

// Ayl�k 8500 TL maa� alan ki�inin maa��na y�zde 12 zam yap�l�rsa 

	int main(){ 
	float maas,yenimaas;
	
	printf("***** Maas Zam Hesabi ***** \n\n");
	printf("Lutfen maasinizi giriniz: ");
	scanf("%f",&maas);
	
	yenimaas=maas+maas*12/100;
	
	printf("Yapilan zamdan sonra maasiniz: %f",yenimaas);
	
	return 0;
}
