#include <stdio.h>
#include <stdlib.h>

//Say�n�n Tam B�lenlerini Yazan

int main(){
	
	int sayi,i;
	
	printf("Lutfen sayiyi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		
		if(sayi%i==0){
			printf("Bolen: %d\n",i);
		}
	}
	return 0;
}
