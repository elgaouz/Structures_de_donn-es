#include <stdio.h>
#include <stdlib.h>
#include"ABR.h"
int main(){
	 
	ABR a = NULL;
    a = insererABR(a, 50);
    a = insererABR(a, 30);
    a = insererABR(a, 70);
    a = insererABR(a, 20);
    a = insererABR(a, 40);
    a = insererABR(a, 60);
    a = insererABR(a, 80);

    printf("Parcours en ordre croissant :\n");
    parcours(a);
    printf("\n");

    if (rechercherABR(a, 60)) {
        printf("Element 60 trouve\n");
    } else {
        printf("Element 60 non trouve\n");
    }

    if (rechercherAB(a, 90)) {
        printf("Element 90 trouve\n");
    } else {
        printf("Element 90 non trouve\n");
    }

    ABR min = chercherMin(a);
    printf("La plus petite valeur est : %d\n", min->info);

    ABR max = chercherMax(a);
    printf("La plus grande valeur est : %d\n", max->info);

    a = supprimerABR(a, 20);

    printf("Parcours en ordre croissant apres suppression de 20 :\n");
    parcours(a);
    printf("\n");

    return 0;
	
}
