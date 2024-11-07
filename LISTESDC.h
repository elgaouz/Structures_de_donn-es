//#ifndef LISTESDC_H_INCLUDED
//#define LISTESDC_H_INCLUDED


typedef struct noeud *Noeud;

typedef struct noeud{
    int info;
    Noeud suivant;
    Noeud precedant;
}noeud;
typedef struct liste_DC *liste;
typedef struct liste_DC{
    Noeud tete;
    Noeud queue;
    int nbr_noeud;
}liste_DC;



liste creationListeVide();

liste ajouterDebut(liste, int);

liste ajouterFin(liste, int);

void afficher(liste);

void afficherinverse(liste);

void chercherNoeud(liste, int);

liste supprimer(liste, int);

//#endif // LISTESDC_H_INCLUDED

