#include<stdio.h>
#include<stdlib.h>

//Girilen say�n�n tek mi �ift mi oldu�unu bulmak

int main(){
	
	int sayi,tek,cift;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	

	if(sayi%2==0){
			
		printf("Girdiginiz sayi %d cifttir",sayi);
	}
	else{
		
		printf("Girdiginiz sayi %d tektir",sayi);
	
	}

		
	return 0;
}
