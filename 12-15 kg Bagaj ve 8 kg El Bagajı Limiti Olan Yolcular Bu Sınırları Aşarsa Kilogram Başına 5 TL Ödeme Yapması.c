#include<stdio.h>
#include<stdlib.h>

// 15 kg bagaj ve 8 kg el limiti olan ve bu s�n�rlar� a�arsa yolcu kg ba��na 5 tl �deme yapmas� gerekiyor

int main(){
	
	int bagaj,elb,Bodeme,borcB,Elodeme,borcE;
	
	printf("Lutfen bagaj kilogramini giriniz: ");
	scanf("%d",&bagaj);
	
	printf("Lutfen el bagaj kilogramini giriniz: ");
	scanf("%d",&elb);
	
	if(bagaj>15 && elb>8){
		
		Bodeme= bagaj-15;
		borcB=Bodeme*5;
		printf("�denecek Miktar: %d\n",borcB);
				
		Elodeme= elb-8;
		borcE=Elodeme*5;
		printf("Odenecek Miktar: %d",borcE);
	}
	 else
	 
	 printf("Odenecek tutariniz bulunmamaktad�r.");

	return 0;
}
