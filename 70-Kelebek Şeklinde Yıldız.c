#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    // �st yar�
    for(i=1;i<=5;i++) {
        // Sol y�ld�zlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        // Bo�luklar
        for(j=1;j<=(5 - i)*2;j++) {
            printf(" ");
        }
        // Sa� y�ld�zlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    // Alt yar�
    for(i=5;i>=1;i--) {
        // Sol y�ld�zlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        // Bo�luklar
        for(j=1;j<=(5-i)*2;j++) {
            printf(" ");
        }
        // Sa� y�ld�zlar
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

