#include<stdio.h>
#include<stdlib.h>
// el i�in 8 kg normal i�in 1 kg bagaj hakk� . el haklar�n� ge�erse kg ba�� 4 tl normal hakk� ge�erse 5 tl el 
// ve normal bagaj �creti giren kullan�c�n�n �deyece�i �cret ne olur.
int main(){
	
	int elB,normalB,ynormalB,yelB,toplam;
	
	printf("Lutfen el bagaj kg giriniz:");
	scanf("%d",&elB);
	
	printf("Lutfen normal bagaj kg giriniz:");
	scanf("%d",&normalB);
	
	if(elB>=8 || normalB>=15){
		
		yelB=(elB-8)*4;
		ynormalB=(normalB-15)*5;
		toplam=yelB+ynormalB;
		printf("Odemeniz gereken ekstra ucret: %d TL",toplam);
	}
		
	else {
		
		printf("Odemeniz gereken ekstra ucret bulunmamaktadir.");
	}
	return 0;
}
