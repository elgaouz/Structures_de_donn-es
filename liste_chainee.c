#include <stdlib.h>
#include <stdio.h>
#include "liste_chainee.h"
//ajout au debut
pNoeud ajoutDebut(pNoeud l, int donnee){
 pNoeud new = malloc(sizeof(liste));
 new->info=donnee;
 new->lien=l;
 return new;
}
//2) afficher les donnees d'une liste
void afficher(pNoeud l){
 if(l==NULL)
 printf("liste vide");
 else{
 pNoeud p=l;
 while(p!= NULL){
 printf("%d \t",p->info);
 p=p->lien;
 }
 }
}
//3)la langueur d'une liste
int longueurL(pNoeud l){
 pNoeud p=l;
 if (p==NULL)
 return 0;
 else {
 int i=0;
 while (p!=NULL){
 i++;
 p=p->lien;
 }
 return i;
 }
}
//4)ajout  a la fin
pNoeud ajoutfin(pNoeud l, int donnee){
 pNoeud p=l;
 pNoeud new = malloc(sizeof(pNoeud));
 new->info=donnee;
 new->lien=NULL;
 if(l==NULL)
 l=ajoutDebut(l,donnee);
 while (p->lien!=NULL){
 p=p->lien;
 }
 p->lien=new;
 return l;
}
//5)supprimer au debut
pNoeud supprimerDebut(pNoeud l){
 if(l!=NULL){
 pNoeud p=l->lien;
 free(l);
 return p;
 }
 else return NULL;
}
//6)supprimer a la fin
pNoeud supprimerfin(pNoeud l){
 if(l==NULL)
 return NULL;
 else {
 pNoeud p=l;
 pNoeud t=l;
 while (p->lien!=NULL){
 t=p;
 p=p->lien;
 }
 free(p);
 t->lien=NULL;
 return l;
 }
}
//7)supprimer une position donnee
pNoeud supprimerPos(pNoeud l, int posi){
 if(posi<1 || posi>longueurL(l)){
 printf("erreur");
 return l;
 }else {
 if(l==NULL){
 printf("liste vide");
 return l;
 }else {
 if(posi==1){
 return supprimerDebut(l);
 }else{
 if(posi==longueurL(l))
 return supprimerfin(l);
 else{
 int i;
 pNoeud p,d;
 d=p=l;
 for(i=1; i<posi ; i++){
 d=p;
 p=p->lien;
 }
 d->lien=p->lien;
 free(p);
 return l;
 }
 }
 }
 }
}
//8)ajout a une position determinnee
pNoeud ajouterPos(pNoeud l, int donnee, int posi) {
 if (posi < 1 || posi > longueurL(l)) {
 printf("Erreur");
 return l;
 } else {
 if (posi == 1)
 return ajoutDebut(l, donnee);
 else {
 if (posi == longueurL(l))
 return ajoutfin(l, donnee);
 else {
 pNoeud new = (pNoeud) malloc(sizeof (liste));
 new->info = donnee;
 new->lien = NULL;
 pNoeud p = l;
 int i;
 for ( i= 1; i < posi - 1; i++){
    p = p->lien;}
 new->lien = p->lien;
 p->lien = new;
 return l;
 }
 }
 }
}
//9)concatener deux listes
pNoeud concat(pNoeud l1, pNoeud l2){
 if (l1==NULL){
 return l2;
 }
 else if(l2==NULL)
 return l1;
 else{
 	pNoeud ptr=l1;
    while (ptr->lien!=NULL){
 	ptr=ptr->lien;
 }
  ptr->lien=l2;
  return l1;
 }
}
//10)inverser les elementd d'une liste
pNoeud inverserListe(pNoeud l) {
 if (l == NULL) {
 printf("Erreur: la liste est vide\n");
 return l;
 } else {
 if (longueurL(l) == 1)
 return l;
 else {/*
 pNoeud p;
 pNoeud l1 = NULL;
 while (l != NULL) {
 p = l;
 l = l->lien;
 p->lien = l1;
 l1 = p;
 }
 return l1;
 }*/{//autre methode valable!!!
 pNoeud p;
 while(l!=NULL){
 	p=ajoutDebut(p,l->info);
 	l=l->lien;
 }
 return p;
 }}}} 
 



