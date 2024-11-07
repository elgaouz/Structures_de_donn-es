#include<stdio.h>
#include"liste_chainee.h"
//DONE
int main(){
	pNoeud l=NULL;  // !!attt ici pNoeud est pas liste
    l= ajoutDebut( l, 9);
	l=ajoutfin(l , 7);
	l= ajoutDebut( l, 0);
	l= ajoutDebut( l,3 );
	l= ajoutDebut( l, 8);
   
    l= ajoutfin(l,85); 
    l=supprimerDebut( l);
    l= supprimerfin(l);
    l= supprimerPos(l ,2);
    l= ajouterPos(l, 6, 2);   //on supposant que la premi posi est 1
    int n=longueurL(l);
    printf("la longueur de l est %d \n",n);
    afficher(l);
    printf("\n");
    l= inverserListe(l);
    afficher(l);
    printf("\n");
    pNoeud l2=NULL;
    l2= ajoutDebut( l2, 100);
    l2= ajoutDebut( l2, 955);
    l2= ajoutDebut( l2, 78);
    l2= ajoutDebut( l2, 98);
    l2= ajoutDebut( l2, 0);
    pNoeud l3= concat(l , l2);
    int m=longueurL(l3);
    printf("la longueur de l3 est %d ",m);
    printf("\n");
    afficher(l3);
    
    return 0;
}










