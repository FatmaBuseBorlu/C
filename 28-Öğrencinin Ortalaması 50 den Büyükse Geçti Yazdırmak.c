#include<stdio.h>
#include<stdlib.h>

// ��rencinin ortalamas� 50 den b�y�kse ge�ti yazd�rmak

int main(){
	
	int s1,s2,s3,ort;
	
	printf("Birinci sinav notunuzu giriniz: ");
	scanf("%d",&s1);
	
	printf("Ikinci sinav notunuzu giriniz: ");
	scanf("%d",&s2);
	
	printf("Ucuncu sinav notunuzu giriniz: ");
	scanf("%d",&s3);
	
	ort=s1+s2+s3/3;
	
	printf("Ortalamaniz: %d\n\n",ort);
	
	if(ort>=50){
		
		printf("Tebrikler Sinifi Gectiniz!!");
	}
	
	else{
		printf("Maalesef Sinifta Kaldiniz");
	}
	
	return 0;
}
