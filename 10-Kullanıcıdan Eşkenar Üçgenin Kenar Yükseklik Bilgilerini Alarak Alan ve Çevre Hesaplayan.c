#include<stdio.h>
#include<stdlib.h>

//Kullan�c�dan e�kenar ��genin kenar ve y�kseklik bilgilerini al�p, alan ve �evre hesab�n� yapmas�

int main(){
	int kenar,yukseklik,alan,cevre;
		
	printf("Lutfen kenari giriniz: ");
	scanf("%d",&kenar);
	
	printf("Lutfen yuksekligi giriniz: ");
	scanf("%d",&yukseklik);
	
	alan=(kenar*yukseklik)/2;
	cevre=kenar*3;
	
	printf("Eskenar Alan: %d\nEskenar Cevre: %d",alan,cevre);
	
	return 0;
}
