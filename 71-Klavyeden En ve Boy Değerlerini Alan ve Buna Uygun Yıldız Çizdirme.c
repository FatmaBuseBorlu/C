#include <stdio.h>
#include<stdlib.h>

// Y�ld�zlarla �ekil �izdirme i burada ad�mlara tutuyor j ise her ad�mda ka� y�ld�z �izdirece�ini g�steriyor

int main(){
	
	int i,j,en,boy;	
	
	printf("Lutfen en degerini giriniz: ");
	scanf("%d",&en);
	printf("Lutfen boy degerini giriniz: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++){
			printf("*");
		}
		printf("\n");
	}

}
