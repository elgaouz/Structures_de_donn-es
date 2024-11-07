#include"ListRecu.h"
#include<stdio.h>
//DONE
int main(){
	printf("hello\n");
	pNoeud l=NULL;
	pNoeud l2;
	l=ajoutfinR(l,8);
	l=ajoutfinR(l,9);
	l2=ajoutfinR(l2,3);
	l2=ajoutfinR(l2,85);
	l2=ajoutfinR(l2,4);
	l=ajoutfinR(l,3);
	l=ajoutfinR(l,6);
	l=ajoutfinR(l,0);
	l=supprimerfinR(l);
	afficherR(l);
	afficherR(l2);
	l=inverserListeR(l);
	afficherR(l);
	pNoeud l3=concatR(l,l2);
	afficherR(l3);
	printf("la longueur de l3 est %d\n",longueurR(l3));
	printf("le nombre 3 apparait %d fois dans l3", nbrOccuR(l3,3));
	return 0;
}
