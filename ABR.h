#include<stdio.h>

typedef struct noeud_S *ABR;
struct noeud_S {
int info;
ABR filsGauche;
ABR filsDroit;
} noeud;


ABR creerNoeud(int i, ABR g, ABR d);
ABR insererABR(ABR a, int i);
void parcours(ABR a);
int rechercherABR(ABR a, int n);
int rechercherAB(ABR a,int n);
ABR chercherMin(ABR a);
ABR chercherMax(ABR a);
ABR supprimerABR(ABR a, int valeur);
