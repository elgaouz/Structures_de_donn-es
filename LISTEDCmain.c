#include<stdio.h>
#include"LISTESDC.h"
//DONE
int main()
{
	liste l=creationListeVide();
	l=ajouterFin(l , 7);
	l= ajouterDebut( l, 8);
	l= ajouterDebut( l, 0);
	l= ajouterDebut( l,4 );
	l= ajouterDebut( l, 8);
    afficher(l);
    l= ajouterFin(l , 5);
    afficher(l);
    l=supprimer( l,0);
    afficher(l);
    chercherNoeud(l,8); 
    afficherinverse(l); 

    return 0;
}
	
	
	
	

