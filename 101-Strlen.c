#include<stdio.h>
#include<stdlib.h>
#include<string.h>//Bu k�t�phaneyi eklemek laz�m


int main() {
	
	char kelime[100];
	printf("Kelimeyi Girin: ");
	scanf("%s",&kelime);
	printf("Katar Uzunlugu: %d",strlen(kelime));	
	
	return 0;
}

