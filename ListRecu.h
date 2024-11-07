#include<stdio.h>

typedef struct noeud_S *pNoeud;
typedef struct noeud_S{
 int info;
 pNoeud lien;
}liste;

void afficherR(pNoeud l);
int longueurR(pNoeud l);
int nbrOccuR(pNoeud l, int donne);
pNoeud ajoutfinR(pNoeud l , int donnee);
pNoeud supprimerfinR(pNoeud l);
pNoeud concatR(pNoeud l1 , pNoeud l2);
pNoeud inverserListeR(pNoeud l);
