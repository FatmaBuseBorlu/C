#include<stdio.h>
#include<stdlib.h>
/* klavyeden girilen 3 basamakl� bir say�n� rakamlar� toplam�n� bulan C kodunu yaz�n�z*/

int main() {
   int birler,onlar,yuzler,sayi,toplam;
       
	   printf("Lutfen sayiyi giriniz:");
       scanf("%d",&sayi);
       
       birler=sayi%10;
       onlar=(sayi/10)%10;
       yuzler=sayi/100;
       
       toplam=birler+onlar+yuzler;
       printf("Toplam deger %d dir",toplam);
    return 0;
}

