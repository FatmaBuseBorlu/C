#include <stdio.h>
#include<stdlib.h>

// Dik ��gen olu�turmam�z laz�m ilk ba�lang�� * y�ld�zla ba�layacak taban k�sm�n�n degeri bize kalm��

int main(){
	
	int i,j,taban;
	
	printf("Lutfen taban degerini giriniz: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++){
			
			printf("*");
		}
	printf("\n");
	}

}
