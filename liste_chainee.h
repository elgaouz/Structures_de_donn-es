#include<stdio.h>

typedef struct noeud_S *pNoeud;
typedef struct noeud_S{
 int info;
 pNoeud lien;
}liste;

pNoeud ajoutDebut(pNoeud l, int donnee);
void afficher(pNoeud l);
int longueurL(pNoeud l);
pNoeud ajoutfin(pNoeud l , int donnee);
pNoeud supprimerDebut(pNoeud l);
pNoeud supprimerfin(pNoeud l);
pNoeud supprimerPos(pNoeud l , int posi);
pNoeud ajouterPos(pNoeud l, int donnee, int posi);
pNoeud concat(pNoeud l1 , pNoeud l2);
pNoeud inverserListe(pNoeud l);



